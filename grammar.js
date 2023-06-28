const NEWLINE = /\r?\n/;
const ANYTHING = /[^\n\r]+/;
const SUBJECT = /[^\n\r]{1,49}/;
const NOT_A_COMMENT = /[^#]/;
const SCISSORS = /# -+ >8 -+\r?\n/;
const BRANCH_NAME = /[^\s'”»"“]+/;
const COMMIT = /[0-9a-f]{7,40}/;
const FILEPATH = /\S+/;
const WHITESPACE = /[\f\v ]+/;
const SCOPE = /[a-zA-Z0-9_-]+/;
const COMMENT = /[^\n\r]*\r?\n/;
const COMMENT_TITLE = /[^\n\r:\uff1a]+[:\uff1a]\s*\r?\n/;
const TRAILER_TOKEN = /[a-zA-Z-]+[ ]*[:\uff1a] /;
const GENERATED_COMMENT_TITLE = /[^\n\r:\uff1a]+[:\uff1a][ ]*/;
const NUMBER = /\d+/;
const BREAKING_CHANGE = /BREAKING[- ]CHANGE/;

module.exports = grammar({
  name: 'gitcommit',
  extras: () => [],

  externals: ($) => [$._conventional_type, $._conventional_subject],

  rules: {
    source: ($) =>
      seq(
        repeat($.comment),
        optional(seq(seq($.subject, NEWLINE), repeat($.comment))),
        optional(seq(NEWLINE, alias(repeat($._body_line), $.message))),
        optional($._generated_comments),
        optional($._scissor)
      ),

    subject: ($) =>
      seq(
        choice(
          seq(NOT_A_COMMENT, SUBJECT),
          seq($.prefix, $._conventional_subject)
        ),
        optional(alias(ANYTHING, $.overflow))
      ),

    prefix: ($) =>
      seq(
        alias($._conventional_type, $.type),
        optional(seq('(', alias(SCOPE, $.scope), ')')),
        optional('!'),
        ':'
      ),

    _body_line: ($) =>
      choice($._message, $.breaking_change, $.trailer, $.comment, NEWLINE),

    _message: () => seq(NOT_A_COMMENT, optional(ANYTHING)),

    trailer: ($) =>
      seq(alias(TRAILER_TOKEN, $.token), alias(ANYTHING, $.value)),

    breaking_change: ($) =>
      seq(
        // BREAKING_CHANGE conflicts with TRAILER_TOKEN, an so requires higher
        // lexical precedence
        alias(token(prec(1, BREAKING_CHANGE)), $.token),
        alias(ANYTHING, $.value)
      ),

    comment: ($) =>
      seq(
        '#',
        optional(WHITESPACE),
        optional(
          choice(alias(COMMENT_TITLE, $.title), token(prec(-1, COMMENT)))
        )
      ),
    _generated_comments: ($) =>
      seq(
        $._generated_comment_separator,
        repeat(choice($.generated_comment, NEWLINE))
      ),

    generated_comment: ($) =>
      choice(
        seq(/#\t/, $._change),
        seq('#    ', $.rebase_command),
        seq(
          /#[ ]*/,
          optional(
            choice(
              $.rebase_command,
              $._onbranch,
              $._uptodate,
              $._behind,
              $._ahead,
              $._detached_head,
              $._rebasing,
              $._interactive_rebasing,
              seq(
                alias(token(prec(-1, GENERATED_COMMENT_TITLE)), $.title),
                optional(alias(COMMENT, $.value))
              ),
              token(prec(-2, COMMENT))
            )
          )
        )
      ),

    _onbranch: ($) =>
      seq(
        alias(
          choice(
            'On branch ',
            'Sur la branche ',
            'Текущая ветка: ',
            'På grenen ',
            'Üzerinde bulunulan dal: ',
            'Trên nhánh ',
            '位於分支 ',
            'Em ramo ',
            'Na gałęzi ',
            '현재 브랜치 ',
            'Sul branch ',
            'Pada cabang ',
            'En la rama ',
            'Στον κλάδο ',
            'Auf Branch ',
            'En la branca ',
            'На клон '
          ),
          $.text
        ),
        alias(BRANCH_NAME, $.branch),
        NEWLINE
      ),

    branch: () => BRANCH_NAME,
    _commit: () => COMMIT,
    number: () => NUMBER,

    _generated_comment_separator: ($) =>
      seq(
        alias(
          choice(
            '# Please enter the commit message for your changes. Lines starting',
            '# Introduïu el missatge de comissió per als vostres canvis.',
            '# Introduïu el missatge de comissió dels vostres canvis.',
            '# Introduïu el missatge de comissió pels vostres canvis. Es mantindran',
            '# Bitte geben Sie eine Commit-Beschreibung für Ihre Änderungen ein. Zeilen,',
            '# Bitte geben Sie eine Commit-Beschreibung für Ihre Änderungen ein. Zeilen, die',
            '# Παρακαλώ εισάγετε το μήνυμα υποβολής για τις αλλαγές σας. Οι γραμμές που αρχίζουν',
            '# Por favor ingresa el mensaje del commit para tus cambios. Las',
            '# Veuillez saisir le message de validation pour vos modifications. Les lignes',
            '# Veuillez saisir le message de validation pour vos modifications. Les lignes commençant',
            '# Mohon masukkan pesan komit untuk perubahan Anda. Baris yang diawali',
            '# Immetti il messaggio di commit per le modifiche. Le righe che iniziano',
            "# 변경 사항에 대한 커밋 메시지를 입력하십시오. '%c' 문자로 시작하는",
            '# Podaj komunikat zapisu swoich zmian. Wiersze zaczynające się',
            '# Por favor, introduz a mensagem de memória das tuas alterações.',
            '# Пожалуйста, введите сообщение коммита для ваших изменений. Строки,',
            '# Ange incheckningsmeddelandet för dina ändringar. Rader som inleds',
            "# Lütfen değişiklikleriniz için bir işleme iletisi girin. '%c' ile başlayan",
            '# Hãy nhập vào các thông tin để giải thích các thay đổi của bạn. Những',
            '# Hãy nhập vào các thông tin để giải thích các thay đổi của bạn. Những dòng được',
            "# 请为您的变更输入提交说明。以 '%c' 开始的行将被忽略。",
            "# 请为您的变更输入提交说明。以 '%c' 开始的行将被忽略，而一个空的提交",
            "# 请为您的变更输入提交说明。以 '%c' 开始的行将被保留，如果您愿意",
            '# 請輸入描述您變更的提交訊息。',
            '# 請輸入描述您變更的提交訊息。開頭是「%c」',
            '# 請輸入描述您變更的提交訊息。會保留開頭是「%c」',
            '# 請輸入描述您變更的提交訊息。會保留開頭是',
            '# Въведете съобщението за подаване на промѐните.  Редовете, които започват'
          ),
          $.generated_comment
        ),
        NEWLINE
      ),

    _change: ($) =>
      choice(
        seq(optional($.change), optional(WHITESPACE), $._filepath),
        token(prec(-1, ANYTHING))
      ),

    change: ($) =>
      field('kind', choice($.new, $.modified, $.renamed, $.deleted)),

    new: () =>
      choice(
        'new file:',
        'nouveau fichier :',
        'нов файл:',
        'fitxer nou:',
        'neue Datei:',
        'νέο αρχείο:',
        'nuevos archivos:',
        'berkas baru:',
        'nuovo file:',
        '새 파일:',
        'nowy plik:',
        'novo ficheiro:',
        'новый файл:',
        'ny fil:',
        'yeni dosya:',
        'tập tin mới:',
        '新文件：',
        '新檔案：'
      ),
    deleted: () =>
      choice(
        'deleted:',
        'supprimé :',
        'изтрит:',
        'suprimit:',
        'gelöscht:',
        'διαγραφή:',
        'borrados:',
        'terhapus:',
        'eliminato:',
        '삭제함:',
        'usunięto:',
        'eliminado:',
        'удалено:',
        'borttagen:',
        'silindi:',
        'đã xóa:',
        '删除：',
        '刪除：'
      ),
    modified: () =>
      choice(
        'modified:',
        'modifié :',
        'променен:',
        'modificat:',
        'geändert:',
        'τροποποίηση:',
        'modificados:',
        'terubah:',
        'modificato:',
        '수정함:',
        'zmieniono:',
        'modificado:',
        'изменено:',
        'ändrad:',
        'değiştirildi:',
        'đã sửa:',
        '修改：',
        '修改：'
      ),
    renamed: () =>
      choice(
        'renamed:',
        'renommé :',
        'преименуван:',
        'canviat de nom:',
        'umbenannt:',
        'μετονομασία:',
        'renombrados:',
        'terganti nama:',
        'rinominato:',
        '이름 바꿈:',
        'zmieniono nazwę:',
        'renomeado:',
        'переименовано:',
        'namnbytt:',
        'yeniden adlandırıldı:',
        'đã đổi tên:',
        '重命名：',
        '重新命名：'
      ),

    _filepath: ($) =>
      seq(
        alias(FILEPATH, $.filepath),
        optional(WHITESPACE),
        optional(
          seq(alias('->', $.arrow), WHITESPACE, alias(FILEPATH, $.filepath))
        ),
        optional(alias(token(prec(-1, ANYTHING)), $.annotation))
      ),

    _scissor: ($) => seq(alias(SCISSORS, $.scissor), $.diff),

    _scissor_generated_comment: ($) =>
      seq(
        '#',
        optional(
          choice(
            alias(GENERATED_COMMENT_TITLE, $.title),
            token(prec(-1, ANYTHING))
          )
        )
      ),

    diff: ($) =>
      repeat1(
        choice(
          alias($._scissor_generated_comment, $.generated_comment),
          seq(/[^#]/, optional(ANYTHING)),
          NEWLINE
        )
      ),

    rebase_command: () =>
      seq(
        choice(
          'pick',
          'edit',
          'squash',
          'merge',
          'fixup',
          'drop',
          'reword',
          'exec',
          'label',
          'reset',
          'break',
          'merge'
        ),
        ANYTHING
      ),

    _uptodate: ($) =>
      choice(
        seq("Your branch is up to date with '", $.branch, "'."),
        seq("Votre branche est à jour avec '", $.branch, "'."),
        seq("您的分支與上游分支 '", $.branch, "' 一致。"),
        seq("您的分支与上游分支 '", $.branch, "' 一致。"),
        seq('Nhánh của bạn đã cập nhật với “', $.branch, '”.'),
        seq("Dalınız '", $.branch, "' ile güncel."),
        seq('Din gren är à jour med "', $.branch, '".'),
        seq('Эта ветка соответствует «', $.branch, '».'),
        seq("Teu ramo está atualizado com '", $.branch, "'."),
        seq('Twoja gałąź jest na bieżąco z „', $.branch, '”.'),
        seq("브랜치가 '", $.branch, "'에 맞게 업데이트된 상태입니다."),
        seq("Il tuo branch è aggiornato rispetto a '", $.branch, "'."),
        seq("Cabang Anda mutakhir dengan '", $.branch, "'."),
        seq("Tu rama está actualizada con '", $.branch, "'."),
        seq("Ο κλάδος σας είναι ενήμερος με το '", $.branch, "'."),
        seq("Ihr Branch ist auf demselben Stand wie '", $.branch, "'."),
        seq('La vostra branca està al dia amb «', $.branch, '».'),
        seq('Клонът е обновен към „', $.branch, '“.')
      ),

    _behind: ($) =>
      // prettier-ignore
      choice(
        seq("Your branch is behind '", $.branch, "' by ", $.number, ' commit, and can be fast-forwarded.'),
        seq("Your branch is behind '", $.branch, "' by ", $.number, ' commits, and can be fast-forwarded.'),
        seq("Votre branche est en retard sur '", $.branch, "' de ", $.number, ' commit, et peut être mise à jour en avance rapide.'),
        seq("Votre branche est en retard sur '", $.branch, "' de ", $.number, ' commits, et peut être mise à jour en avance rapide.'),
        seq('La vostra branca està ', $.number, ' comissió per darrere de «', $.branch, '», i pot avançar-se ràpidament.'),
        seq('La vostra branca està ', $.number, ' comissions per darrere de «', $.branch, '», i pot avançar-se ràpidament.'),
        seq('Клонът ви е с ', $.number, ' подаване зад „', $.branch, '“ и може да бъде превъртян.'),
        seq('Клонът ви е с ', $.number, ' подавания зад „', $.branch, '“ и може да бъде превъртян.'),
        seq('Ihr Branch ist ', $.number, " Commit hinter '", $.branch, "', und kann vorgespult werden."),
        seq('Ihr Branch ist ', $.number, " Commits hinter '", $.branch, "', und kann vorgespult werden."),
        seq("Ο κλάδος σας είναι πίσω από το '", $.branch, "' κατά ", $.number, ' υποβολή, και μπορεί να κάνει ταχεία προώθηση.'),
        seq("Ο κλάδος σας είναι πίσω από το '", $.branch, "' κατά ", $.number, ' υποβολές, και μπορεί να κάνει ταχεία προώθηση.'),
        seq("Tu rama está detrás de '", $.branch, "' por ", $.number, ' commit, y puede ser avanzada rápido.'),
        seq("Tu rama está detrás de '", $.branch, "' por ", $.number, ' commits, y puede ser avanzada rápido.'),
        seq("Cabang Anda di belakang '", $.branch, "' oleh ", $.number, ' komit, dan bisa di maju-cepatkan.'),
        seq("Cabang Anda di belakan '", $.branch, "' oleh ", $.number, ' komit, dan bisa di maju-cepatkan.'),
        seq("Il tuo branch, rispetto a '", $.branch, "', è indietro di ", $.number, ' commit e ne posso eseguire il fast forward.'),
        seq("Il tuo branch, rispetto a '", $.branch, "', è indietro di ", $.number, ' commit e ne posso eseguire il fast forward.'),
        seq("브랜치가 '", $.branch, "'보다 ", $.number, '개 커밋 뒤에 있고, 앞으로 돌릴 수 있습니다.'),
        seq('Nhánh của bạn đứng đằng sau “', $.branch, '” ', $.number, ' lần chuyển giao, và có thể được chuyển-tiếp-nhanh.'),
        seq("Dalınız '", $.branch, "' dalından ", $.number, ' işleme geride ve ileri sarılabilir.'),
        seq('Din gren ligger efter "', $.branch, '" med ', $.number, ' incheckning, och kan snabbspolas.'),
        seq('Din gren ligger efter "', $.branch, '" med ', $.number, ' incheckningar, och kan snabbspolas.'),
        seq('Ветка отстает от «', $.branch, '» на ', $.number, ' коммит и может быть быстро перемотана.'),
        seq('Ветка отстает от «', $.branch, '» на ', $.number, ' коммита и может быть быстро перемотана.'),
        seq('Ветка отстает от «', $.branch, '» на ', $.number, ' коммитов и может быть быстро перемотана.'),
        seq("Teu ramo está atrás de '", $.branch, "' por ", $.number, ' memória, e pode ser avançado.'),
        seq("Teu ramo está atrás de '", $.branch, "' por ", $.number, ' memórias, e pode ser avançado.'),
        seq('Twoja gałąź jest za „', $.branch, '” o ', $.number, ' zapis i może zostać przewinięta.'),
        seq('Twoja gałąź jest za „', $.branch, '” o ', $.number, ' zapisy i może zostać przewinięta.'),
        seq('Twoja gałąź jest za „', $.branch, '” o ', $.number, ' zapisów i może zostać przewinięta.'),
        seq("您的分支落后 '", $.branch, "' 共 ", $.number, ' 个提交，并且可以快进。'),
        seq("您的分支落後 '", $.branch, "' 共 ", $.number, ' 個提交，並且可以快轉。')
      ),

    _ahead: ($) =>
      // prettier-ignore
      choice(
        seq("Your branch is ahead of '", $.branch, "' by ", $.number, ' commit.'),
        seq("Your branch is ahead of '", $.branch, "' by ", $.number, ' commits.'),
        seq("Votre branche est en avance sur '", $.branch, "' de ", $.number, ' commit.'),
        seq("Votre branche est en avance sur '", $.branch, "' de ", $.number, ' commits.'),
        seq("您的分支領先 '", $.branch, "' 共 ", $.number, ' 個提交。'),
        seq("您的分支领先 '", $.branch, "' 共 ", $.number, ' 个提交。'),
        seq('Nhánh của bạn đứng trước “', $.branch, '” ', $.number, ' lần chuyển giao.'),
        seq("Dalınız '", $.branch, "' dalından ", $.number, ' işleme ileride.'),
        seq('Din gren ligger före "', $.branch, '" med ', $.number, ' incheckning.'),
        seq('Din gren ligger före "', $.branch, '" med ', $.number, ' incheckningar.'),
        seq('Ваша ветка опережает «', $.branch, '» на ', $.number, ' коммит.'),
        seq('Ваша ветка опережает «', $.branch, '» на ', $.number, ' коммита.'),
        seq('Ваша ветка опережает «', $.branch, '» на ', $.number, ' коммитов.'),
        seq('Ваша ветка опережает «', $.branch, '» на ', $.number, ' коммитов.'),
        seq("Teu ramo está à frente de '", $.branch, "' por ", $.number, ' memória.'),
        seq("Teu ramo está à frente de '", $.branch, "' por ", $.number, ' memórias.'),
        seq('Twoja gałąź jest do przodu względem „', $.branch, '” o ', $.number, ' zapis.'),
        seq('Twoja gałąź jest do przodu względem „', $.branch, '” o ', $.number, ' zapisy.'),
        seq('Twoja gałąź jest do przodu względem „', $.branch, '” o ', $.number, ' zapisów.'),
        seq("브랜치가 '", $.branch, "'보다 ", $.number, '개 커밋만큼 앞에 있습니다.'),
        seq("Il tuo branch è avanti rispetto a '", $.branch, "' di ", $.number, ' commit.'),
        seq("Il tuo branch è avanti rispetto a '", $.branch, "' di ", $.number, ' commit.'),
        seq("Cabang Anda mendahului '", $.branch, "' oleh ", $.number, ' komit.'),
        seq("Cabang Anda mendahului '", $.branch, "' oleh ", $.number, ' komit.'),
        seq("Tu rama está adelantada a '", $.branch, "' por ", $.number, ' commit.'),
        seq("Tu rama está adelantada a '", $.branch, "' por ", $.number, ' commits.'),
        seq("Ο κλάδος σας είναι μπροστά από το '", $.branch, "' κατά ", $.number, ' υποβολή.'),
        seq("Ο κλάδος σας είναι μπροστά από το '", $.branch, "' κατά ", $.number, ' υποβολές.'),
        seq('Ihr Branch ist ', $.number, " Commit vor '", $.branch, "'."),
        seq('Ihr Branch ist ', $.number, " Commits vor '", $.branch, "'."),
        seq('La vostra branca està ', $.number, ' comissió per davant de «', $.branch, '».'),
        seq('La vostra branca està ', $.number, ' comissions per davant de «', $.branch, '».'),
        seq('Клонът ви е с ', $.number, ' подаване пред „', $.branch, '“.'),
        seq('Клонът ви е с ', $.number, ' подавания пред „', $.branch, '“.')
      ),

    _detached_head: ($) =>
      seq(
        alias(
          choice(
            'HEAD detached at ',
            'Указателят „HEAD“ не е свързан и е при ',
            'HEAD separat a ',
            'HEAD losgelöst bei ',
            'Αποσυνδεδεμένο HEAD στο ',
            'HEAD desacoplada en ',
            'HEAD détachée sur ',
            'HEAD terlepas pada ',
            'HEAD scollegato su ',
            'HEAD가 다음 위치에서 분리: ',
            'HEAD odłączone na ',
            'HEAD desanexada em ',
            'Отсоединённый указатель HEAD указывает на ',
            'HEAD frånkopplad vid ',
            'HEAD şurada ayrıldı: ',
            'HEAD được tách rời tại ',
            '头指针分离于 ',
            '開頭指標分離於 '
          ),
          $.text
        ),
        alias($._commit, $.branch),
        NEWLINE
      ),

    _rebasing: ($) =>
      // prettier-ignore
      choice(
        seq("You are currently rebasing branch '", $.branch, "' on '", $.branch, "'."),
        seq("Vous êtes en train de rebaser la branche '", $.branch, "' sur '", $.branch, "'."),
        seq("您在執行將分支 '", $.branch, "' 重定基底到 '", $.branch, "' 的動作。"),
        seq("您在执行将分支 '", $.branch, "' 变基到 '", $.branch, "' 的操作。"),
        seq('Bạn hiện nay đang thực hiện việc “rebase” nhánh “', $.branch, '” trên “', $.branch, '”.'),
        seq("Şu anda '", $.branch, "' dalını '", $.branch, "' üzerine yeniden temellendiriyorsunuz."),
        seq('Du håller på att ombasera grenen "', $.branch, '" ovanpå "', $.branch, '".'),
        seq('Вы сейчас перемещаете ветку «', $.branch, '» над «', $.branch, '».'),
        seq("Estás rebaseando ramo '", $.branch, "' sobre '", $.branch, "'."),
        seq('Przestawiasz właśnie gałąź „', $.branch, '” na „', $.branch, '”.'),
        seq("현재 '", $.branch, "' 브랜치를 '", $.branch, "' 위로 리베이스하는 중입니다."),
        seq("Attualmente stai eseguendo il rebase del branch '", $.branch, "' su '", $.branch, "'."),
        seq("Anda sedang mendasarkan ulang cabang '", $.branch, "' pada '", $.branch, "'."),
        seq("Estás aplicando un rebase de la rama '", $.branch, "' sobre '", $.branch, "'."),
        seq("Αυτή τη στιγμή κάνετε rebase τον κλάδο '", $.branch, "' στο '", $.branch, "'."),
        seq("Sie sind gerade beim Rebase von Branch '", $.branch, "' auf '", $.branch, "'."),
        seq('Actualment esteu fent «rebase» de la branca «', $.branch, '» en «', $.branch, '».'),
        seq('В момента пребазирате клона „', $.branch, '“ върху „', $.branch, '“.')
      ),

    _interactive_rebasing: ($) =>
      // prettier-ignore
      choice(
        seq('interactive rebase in progress; onto ', $.branch),
        seq('rebasage interactif en cours ; sur ', $.branch),
        seq('извършвате интерактивно пребазиране върху ', $.branch),
        seq('«rebase» interactiu en curs; sobre ', $.branch),
        seq('interaktives Rebase im Gange; auf ', $.branch),
        seq('εκτελείται διαδραστικό rebase, πάνω στο ', $.branch),
        seq('rebase interactivo en progreso; sobre ', $.branch),
        seq('sedang mendasarkan ulang interaktif; ke ', $.branch),
        seq('rebase interattivo in corso su ', $.branch),
        seq('대화형 리베이스 진행 중. 갈 위치는 ', $.branch),
        seq('trwa interaktywne przestawianie na ', $.branch),
        seq('rebase interativo em curso; sobre ', $.branch),
        seq('интерактивное перемещение в процессе; над ', $.branch),
        seq('interaktiv ombasering pågår; ovanpå ', $.branch),
        seq('şunun üzerine etkileşimli yeniden temellendirme sürmekte: ', $.branch),
        seq('rebase ở chế độ tương tác đang được thực hiện; lên trên ', $.branch),
        seq('交互式变基操作正在进行中；至 ', $.branch),
        seq('互動式重定基底動作正在進行中；至 ', $.branch)
      ),
  },
});
