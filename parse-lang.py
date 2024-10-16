import os
import sys
import glob
import polib
from git import Repo
import semver

LOWEST_GIT_VERSION = "2.30.2" # based on https://packages.debian.org/fr/git

lang = {
    'on_branch': 'On branch ',
    'new_file': 'new file:',
    'deleted': 'deleted:',
    'modified': 'modified:',
    'renamed': 'renamed:',
    'typechange': 'typechange:',
    'detached': 'HEAD detached at ',
    'rebasing': 'You are currently rebasing branch \'%s\' on \'%s\'.',
    'interactive-rebase': 'interactive rebase in progress; onto ',
    'generated_separator': 'Please enter the commit message for your changes. Lines starting',
    'up_to_date': 'Your branch is up to date with \'%s\'.',
    'behind': 'Your branch is behind \'%s\' by %d commit, and can be fast-forwarded.',
    'ahead': 'Your branch is ahead of \'%s\' by %d commit.'
}

msgstrs = {
}

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
                    if value == entry.msgid or entry.msgid.startswith(value + "\n"):
                        msgstrs[key].append('"'+entry.msgstr.split('\n')[0]+'"') if entry.msgstr.split('\n')[0] != '' else None
                        if entry.msgid_plural != '':
                            msgstrs[key].append('"'+entry.msgid_plural.split('\n')[0]+'"')
                            for plural in entry.msgstr_plural:
                                msgstrs[key].append('"'+entry.msgstr_plural[plural].split('\n')[0]+'"') if entry.msgstr_plural != '' else None
        except IOError as e:
            print(f"Error reading file: {po_file}")
IOError
def main():
    for key, value in lang.items():
        msgstrs[key] = [
            '"' + value + '"'
        ]

    print('cloning git repo')

    if os.path.exists('git_repo'):
        os.system('rm -rf git_repo')
    repo_url = "https://github.com/git/git.git"
    repo = Repo.clone_from(repo_url, 'git_repo')

    lowest_version = semver.Version.parse(LOWEST_GIT_VERSION)
    for tag in repo.tags:
        if tag.name.startswith('v') and semver.Version.is_valid(tag.name[1:]):
            current_version = semver.Version.parse(tag.name[1:])
            if current_version > lowest_version and current_version.prerelease is None:
                print(f"Version: {semver.Version.parse(tag.name[1:])}")
                repo.git.checkout(tag.name)

                print('reading po files')
                read_po_files('git_repo/po')

    for key, values in msgstrs.items():
        msgstrs[key] = list(set(values))

    for key, value in lang.items():
        with open(f"langs/{key}.txt", 'w') as file:
            file.write('\n'.join(sorted(msgstrs[key])))

if __name__ == "__main__":
    main()


