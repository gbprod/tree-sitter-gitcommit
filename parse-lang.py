import os
import sys
import glob
import polib
from git import Repo
import semver

LOWEST_GIT_VERSION = "2.30.2" # based on https://packages.debian.org/fr/git

lang = {
    'onbranch': {
        'msgid': 'On branch ',
        'indent': 12
    },
    'newfile': {
        'msgid': 'new file:',
        'indent': 8
    },
    'deleted': {
        'msgid': 'deleted:',
        'indent': 8
    },
    'modified': {
        'msgid': 'modified:',
        'indent': 8
    },
    'renamed': {
        'msgid': 'renamed:',
        'indent': 8
    },
    'typechange': {
        'msgid': 'typechange:',
        'indent': 8
    },
    'detached_head': {
        'msgid': 'HEAD detached at ',
        'indent': 12
    },
    'rebasing': {
        'msgid': 'You are currently rebasing branch \'%s\' on \'%s\'.',
        'indent': 8,
        'seq': True,
        'replace': {
            '%s': '", $.branch, "'
        },
        'replace_after': {
            # Special case for "Estás aplicando un rebase de la rama '%s' sobre '%s."
            '", $.branch, "."': '", $.branch'
        }
    },
    'interactive_rebase': {
        'msgid': 'interactive rebase in progress; onto ',
        'indent': 8,
        'seq': True,
        'suffix': ', $.branch'
    },
    'generated_comment_separator': {
        'msgid': 'Please enter the commit message for your changes. Lines starting',
        'indent': 12,
        'replace': {
            '%s': '#',
            '%c': '#'
        },
        'is_comment': True
    },
    'uptodate': {
        'msgid': 'Your branch is up to date with \'%s\'.',
        'indent': 8,
        'replace': {
            '%s': '", $.branch, "'
        },
        'seq': True
    },
    'behind': {
        'msgid': 'Your branch is behind \'%s\' by %d commit, and can be fast-forwarded.',
        'indent': 8,
        'replace': {
            '%s': '", $.branch, "',
            '%d': '", $.number, "',
            '%2$d': '", $.number, "',
            '%1$s': '", $.branch, "',
        },
        'seq': True
    },
    'ahead': {
        'msgid': 'Your branch is ahead of \'%s\' by %d commit.',
        'indent': 8,
        'replace': {
            '%s': '", $.branch, "',
            '%d': '", $.number, "',
            '%2$d': '", $.number, "',
            '%1$s': '", $.branch, "',
        },
        'seq': True
    },
}

msgstrs = {
}

def clone_repo():
    print('cloning git repo')
    # return Repo('git_repo')
    if os.path.exists('git_repo'):
        os.system('rm -rf git_repo')
    repo_url = "https://github.com/git/git.git"
    return Repo.clone_from(repo_url, 'git_repo')

def extract_msgstr(repo):
    lowest_version = semver.Version.parse(LOWEST_GIT_VERSION)
    for tag in repo.tags:
        if tag.name.startswith('v') and semver.Version.is_valid(tag.name[1:]):
            current_version = semver.Version.parse(tag.name[1:])
            if current_version > lowest_version and current_version.prerelease is None:
                print(f"Version: {current_version}")
                repo.git.checkout(tag.name)
                print('reading po files')
                read_po_files('git_repo/po')

def read_po_files(directory):
    po_files = glob.glob(os.path.join(directory, '*.po'))

    if not po_files:
        print(f"No .po files found in directory: {directory}")
        return

    for po_file in po_files:
        print(f"Reading file: {po_file}")
        try:
            pofile = polib.pofile(po_file)
            for entry in pofile:
                for key, value in lang.items():
                    if value['msgid'] == entry.msgid or entry.msgid.startswith(value['msgid'] + "\n"):
                        if entry.msgstr.split('\n')[0] != '':
                            msgstrs[key].append(entry.msgstr.split('\n')[0])
                        if entry.msgid_plural.split('\n')[0] != '':
                            msgstrs[key].append(entry.msgid_plural.split('\n')[0])
                            for plural in entry.msgstr_plural:
                                if entry.msgstr_plural[plural].split('\n')[0] != '':
                                    msgstrs[key].append(entry.msgstr_plural[plural].split('\n')[0])
        except IOError:
            print(f"Error reading file: {po_file}")

def format_msgstrs():
    for key, values in msgstrs.items():
        for i, value in enumerate(values):
            if lang[key].get('is_comment'):
                value = '# ' + value

            # escape double quotes
            value = value.replace('"', '\\"')

            # replace placeholders
            if lang[key].get('replace'):
                for placeholder, replace in lang[key]['replace'].items():
                    value = value.replace(placeholder, replace)

            # surround with quotes
            value = f'"{value}"'

            if lang[key].get('suffix'):
                value = value + lang[key]['suffix']

            if lang[key].get('seq'):
                value = 'seq(' + value + ')'

            if lang[key].get('replace_after'):
                for placeholder, replace in lang[key]['replace_after'].items():
                    value = value.replace(placeholder, replace)

            values[i] = value

def prepare_text(key, values):
    text = ''
    for value in values:
        is_last = value == values[-1]

        # indent
        value = ' ' * lang[key]['indent'] + value

        # trailing comma if not last item
        if not is_last:
            value = value + ','

        # append to text
        text += value + '\n'

    return text

def update_grammar(msgstrs):
    with open('grammar.js', 'r+') as file:
        content = file.read()

    for key, values in msgstrs.items():
        text = prepare_text(key, values)
        start_pos = content.find('// ' + key) + len('// ' + key)
        end_pos = content.find('// end ' + key) - lang[key]['indent']

        content = content[:start_pos] + "\n" + text + content[end_pos:]

    with open('grammar.js', 'w') as file:
        file.write(content)

def main():
    for key, value in lang.items():
        msgstrs[key] = [
            value['msgid']
        ]

    repo = clone_repo()

    extract_msgstr(repo)

    format_msgstrs()
    for key, values in msgstrs.items():
        msgstrs[key] = sorted(list(set(values)))

    update_grammar(msgstrs)

if __name__ == "__main__":
    main()

