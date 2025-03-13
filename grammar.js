const NEWLINE = /\r?\n/;
const ANYTHING_OR_NONE = /[^\n\r]*/;
const ANYTHING = /[^\n\r]+/;
const NOT_A_COMMENT = /[^#]/;
const SCISSORS = /# -+ >8 -+\r?\n/;
const BRANCH_NAME = /[^\s'”»"“]+/;
const COMMIT = /[0-9a-f]{7,40}/;
const FILEPATH = /\S+/;
const WHITESPACE = /[\f\v ]+/;
const SCOPE = /[^\n\r\(\)]+/;
const COMMENT = /[^\n\r]*\r?\n/;
const COMMENT_TITLE = /[^\n\r:\uff1a]+[:\uff1a]\s*\r?\n/;
const TRAILER_TOKEN = /[a-zA-Z-]+[ ]*[:\uff1a] /;
const TRAILER_VALUE = /[^\n\r]+(\r?\n [^\n\r]+)*/;
const GENERATED_COMMENT_TITLE = /[^\n\r:\uff1a]+[:\uff1a][ ]*/;
const NUMBER = /\d+/;
const BREAKING_CHANGE = /BREAKING[- ]CHANGE[ ]*[:\uff1a] /;
const BREAKING_CHANGE_VALUE = /[^\n\r]+(\r?\n [^\n\r]+)*/;

module.exports = grammar({
  name: 'gitcommit',
  extras: () => [],

  externals: ($) => [$._conventional_type, $._trailer_value],

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
        optional(
          seq(alias(choice('fixup!', 'amend!'), $.subject_prefix), WHITESPACE)
        ),
        choice(seq(NOT_A_COMMENT, ANYTHING_OR_NONE), seq($.prefix, ANYTHING))
      ),

    prefix: ($) =>
      seq(
        alias($._conventional_type, $.type),
        optional(seq('(', alias(SCOPE, $.scope), ')')),
        optional('!'),
        alias(/[:\uff1a]/, ':')
      ),

    _body_line: ($) =>
      choice($.message_line, $.breaking_change, $.trailer, $.comment, NEWLINE),

    message_line: () => seq(seq(NOT_A_COMMENT, ANYTHING_OR_NONE)),

    trailer: ($) =>
      seq(
        alias(TRAILER_TOKEN, $.token),
        optional(alias(TRAILER_VALUE, $.value))
      ),

    breaking_change: ($) =>
      seq(
        // BREAKING_CHANGE conflicts with TRAILER_TOKEN, an so requires higher
        // lexical precedence
        alias(token(prec(1, BREAKING_CHANGE)), $.token),
        optional(alias(BREAKING_CHANGE_VALUE, $.value))
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
          // prettier-ignore
          choice(
            // onbranch
            "Auf Branch ",
            "Em ramo ",
            "En la branca ",
            "En la rama ",
            "Na gałęzi ",
            "No ramo ",
            "On branch ",
            "Pada cabang ",
            "På grenen ",
            "Sul branch ",
            "Sur la branche ",
            "Trên nhánh ",
            "Üzerinde bulunulan dal: ",
            "Στον κλάδο ",
            "На ветке ",
            "На гілці ",
            "На клон ",
            "Текущая ветка: ",
            "位于分支 ",
            "位於分支 ",
            "현재 브랜치 "
            // end onbranch
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
          // prettier-ignore
          choice(
            // generated_comment_separator
            "# Ange incheckningsmeddelandet för dina ändringar. Rader som inleds",
            "# Bitte geben Sie eine Commit-Beschreibung für Ihre Änderungen ein. Zeilen, die",
            "# Bitte geben Sie eine Commit-Beschreibung für Ihre Änderungen ein. Zeilen,",
            "# Hãy nhập vào các thông tin để giải thích các thay đổi của bạn. Những dòng được",
            "# Hãy nhập vào các thông tin để giải thích các thay đổi của bạn. Những",
            "# Immetti il messaggio di commit per le modifiche. Le righe che iniziano",
            "# Introduza a mensagem de commit das suas alterações.",
            "# Introduzia a mensagem de commit das suas alterações.",
            "# Introduïu el missatge de comissió dels vostres canvis.",
            "# Introduïu el missatge de comissió pels vostres canvis. Es mantindran",
            "# Introduïu el missatge de comissió per als vostres canvis. ",
            "# Introduïu el missatge de comissió per als vostres canvis.",
            "# Lütfen değişiklikleriniz için bir işleme iletisi girin. '#' ile başlayan",
            "# Mohon masukkan pesan komit untuk perubahan Anda. Baris yang diawali",
            "# Please enter the commit message for your changes. Lines starting",
            "# Podaj komunikat zapisu swoich zmian. Wiersze zaczynające się",
            "# Por favor ingresa el mensaje del commit para tus cambios. Las",
            "# Por favor, introduz a mensagem de memória das tuas alterações.",
            "# Veuillez saisir le message de validation pour vos modifications. Les lignes commençant",
            "# Veuillez saisir le message de validation pour vos modifications. Les lignes",
            "# Παρακαλώ εισάγετε το μήνυμα υποβολής για τις αλλαγές σας. Οι γραμμές που αρχίζουν",
            "# Будь ласка, введіть допис до коміту для ваших змін. Рядки, що починаються з",
            "# Въведете съобщението за подаване на промѐните.  Редовете, които започват",
            "# Въведете съобщението за подаване на промените.  Редовете, които започват",
            "# Пожалуйста, введите сообщение коммита для ваших изменений. Строки,",
            "# 請為您的變更輸入提交說明。以 '#' 開始的行將被保留，如果您原意",
            "# 請為您的變更輸入提交說明。以 '#' 開始的行將被忽略，而一個空的提交",
            "# 請輸入描述您變更的提交訊息。",
            "# 請輸入描述您變更的提交訊息。會保留開頭是",
            "# 請輸入描述您變更的提交訊息。會保留開頭是「#」",
            "# 請輸入描述您變更的提交訊息。開頭是「#」",
            "# 請輸入描述您變更的提交訊息。開頭是「#」的列",
            "# 请为您的变更输入提交说明。以 '#' 开始的行将被保留，如果您原意",
            "# 请为您的变更输入提交说明。以 '#' 开始的行将被保留，如果您愿意",
            "# 请为您的变更输入提交说明。以 '#' 开始的行将被忽略。",
            "# 请为您的变更输入提交说明。以 '#' 开始的行将被忽略，而一个空的提交",
            "# 변경 사항에 대한 커밋 메시지를 입력하십시오. '#' 문자로 시작하는"
            // end generated_comment_separator
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
      field(
        'kind',
        choice($.new, $.modified, $.renamed, $.deleted, $.typechange)
      ),

    new: () =>
      // prettier-ignore
      choice(
        // newfile
        "berkas baru:",
        "fitxer nou:",
        "neue Datei:",
        "new file:",
        "nouveau fichier :",
        "novo ficheiro:",
        "nowy plik:",
        "nuevo archivo:",
        "nuevos archivos:",
        "nuovo file:",
        "ny fil:",
        "tập tin mới:",
        "yeni dosya:",
        "νέο αρχείο:",
        "нов файл:",
        "новий файл:",
        "новый файл:",
        "新文件：",
        "新檔案：",
        "새 파일:"
        // end newfile
      ),
    deleted: () =>
      // prettier-ignore
      choice(
        // deleted
        "borrado:",
        "borrados:",
        "borttagen:",
        "deleted:",
        "eliminado:",
        "eliminato:",
        "gelöscht:",
        "silindi:",
        "supprimé :",
        "suprimit:",
        "terhapus:",
        "usunięto:",
        "đã xóa:",
        "διαγραφή:",
        "видалено:",
        "изтрит:",
        "удалено:",
        "删除：",
        "刪除：",
        "삭제함:"
        // end deleted
      ),
    modified: () =>
      // prettier-ignore
      choice(
        // modified
        "değiştirildi:",
        "geändert:",
        "modificado:",
        "modificados:",
        "modificat:",
        "modificato:",
        "modified:",
        "modifié :",
        "terubah:",
        "zmieniono:",
        "ändrad:",
        "đã sửa:",
        "τροποποίηση:",
        "змінено:",
        "изменено:",
        "променен:",
        "修改：",
        "수정함:"
        // end modified
      ),
    renamed: () =>
      // prettier-ignore
      choice(
        // renamed
        "canviat de nom:",
        "namnbytt:",
        "nome mudado:",
        "renamed:",
        "renombrado:",
        "renombrados:",
        "renomeado:",
        "renommé :",
        "rinominato:",
        "terganti nama:",
        "umbenannt:",
        "yeniden adlandırıldı:",
        "zmieniono nazwę:",
        "đã đổi tên:",
        "μετονομασία:",
        "переименовано:",
        "перейменовано:",
        "преименуван:",
        "重命名：",
        "重新命名：",
        "이름 바꿈:"
        // end renamed
      ),

    typechange: () =>
      // prettier-ignore
      choice(
        // typechange
        "Typänderung:",
        "cambio de tipo:",
        "cambios de tipo:",
        "canviat de tipus:",
        "modif. type :",
        "modifica tipo:",
        "tipe perubahan:",
        "tipo alterado:",
        "typbyte:",
        "typechange:",
        "türü değiştirildi:",
        "zmiana typu:",
        "đổi kiểu:",
        "đổi-kiểu:",
        "αλλαγή τύπου:",
        "змінено тип:",
        "изменен тип:",
        "смяна на вида:",
        "类型变更：",
        "類型變更：",
        "종류 바뀜:"
        // end typechange
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
      // prettier-ignore
      choice(
        // uptodate
        seq("Cabang Anda mutakhir dengan '", $.branch, "'."),
        seq("Dalınız '", $.branch, "' ile güncel."),
        seq("Din gren är à jour med \"", $.branch, "\"."),
        seq("Din gren är à jour med ”", $.branch, "”."),
        seq("Ihr Branch ist auf demselben Stand wie '", $.branch, "'."),
        seq("Il tuo branch è aggiornato rispetto a '", $.branch, "'."),
        seq("La vostra branca està al dia amb «", $.branch, "»."),
        seq("Nhánh của bạn đã cập nhật với '", $.branch, "'."),
        seq("Nhánh của bạn đã cập nhật với “", $.branch, "”."),
        seq("O seu ramo está atualizado com '", $.branch, "'."),
        seq("Teu ramo está atualizado com '", $.branch, "'."),
        seq("Tu rama está actualizada con '", $.branch, "'."),
        seq("Twoja gałąź jest na bieżąco z „", $.branch, "”."),
        seq("Votre branche est à jour avec '", $.branch, "'."),
        seq("Your branch is up to date with '", $.branch, "'."),
        seq("Ο κλάδος σας είναι ενήμερος με το '", $.branch, "'."),
        seq("Ваша ветка обновлена в соответствии с «", $.branch, "»."),
        seq("Ваша гілка не відрізняється від '", $.branch, "'."),
        seq("Ваша гілка не відрізняється від \"", $.branch, "\"."),
        seq("Клонът е обновен към „", $.branch, "“."),
        seq("Эта ветка соответствует «", $.branch, "»."),
        seq("您的分支与上游分支 '", $.branch, "' 一致。"),
        seq("您的分支與上游分支 '", $.branch, "' 一致。"),
        seq("브랜치가 '", $.branch, "'에 맞게 업데이트된 상태입니다.")
        // end uptodate
      ),

    _behind: ($) =>
      // prettier-ignore
      choice(
        // behind
        seq("Cabang Anda di belakan '", $.branch, "' oleh ", $.number, " komit, dan bisa di maju-cepatkan."),
        seq("Cabang Anda di belakang '", $.branch, "' oleh ", $.number, " komit, dan bisa di maju-cepatkan."),
        seq("Dalınız '", $.branch, "' dalından ", $.number, " işleme geride ve ileri sarılabilir."),
        seq("Din gren ligger efter \"", $.branch, "\" med ", $.number, " incheckning, och kan snabbspolas."),
        seq("Din gren ligger efter \"", $.branch, "\" med ", $.number, " incheckningar, och kan snabbspolas."),
        seq("Din gren ligger efter ”", $.branch, "” med ", $.number, " incheckning, och kan snabbspolas."),
        seq("Din gren ligger efter ”", $.branch, "” med ", $.number, " incheckningar, och kan snabbspolas."),
        seq("Ihr Branch ist ", $.number, " Commit hinter '", $.branch, "', und kann vorgespult werden."),
        seq("Ihr Branch ist ", $.number, " Commits hinter '", $.branch, "', und kann vorgespult werden."),
        seq("Il tuo branch, rispetto a '", $.branch, "', è indietro di ", $.number, " commit e ne posso eseguire il fast forward."),
        seq("La vostra branca està ", $.number, " comissions per darrere de «", $.branch, "», i pot avançar-se ràpidament."),
        seq("La vostra branca està ", $.number, " comissió per darrere de «", $.branch, "», i pot avançar-se ràpidament."),
        seq("Nhánh của bạn đứng sau '", $.branch, "' ", $.number, " lần chuyển giao, và có thể được chuyển-tiếp-nhanh."),
        seq("Nhánh của bạn đứng đằng sau “", $.branch, "” ", $.number, " lần chuyển giao, và có thể được chuyển-tiếp-nhanh."),
        seq("O seu ramo está atrás de '", $.branch, "' por ", $.number, " commit, podendo ser atualizado com avanço rápido."),
        seq("O seu ramo está atrás de '", $.branch, "' por ", $.number, " commits, podendo ser atualizado com avanço rápido."),
        seq("Teu ramo está atrás de '", $.branch, "' por ", $.number, " memória, e pode ser avançado."),
        seq("Teu ramo está atrás de '", $.branch, "' por ", $.number, " memórias, e pode ser avançado."),
        seq("Tu rama está detrás de '", $.branch, "' por ", $.number, " commit, y puede ser avanzada rápido."),
        seq("Tu rama está detrás de '", $.branch, "' por ", $.number, " commits, y puede ser avanzada rápido."),
        seq("Twoja gałąź jest za „", $.branch, "” o ", $.number, " zapis i może zostać przewinięta."),
        seq("Twoja gałąź jest za „", $.branch, "” o ", $.number, " zapisy i może zostać przewinięta."),
        seq("Twoja gałąź jest za „", $.branch, "” o ", $.number, " zapisów i może zostać przewinięta."),
        seq("Votre branche est en retard sur '", $.branch, "' de ", $.number, " commit, et peut être mise à jour en avance rapide."),
        seq("Votre branche est en retard sur '", $.branch, "' de ", $.number, " commits, et peut être mise à jour en avance rapide."),
        seq("Your branch is behind '", $.branch, "' by ", $.number, " commit, and can be fast-forwarded."),
        seq("Your branch is behind '", $.branch, "' by ", $.number, " commits, and can be fast-forwarded."),
        seq("Ο κλάδος σας είναι πίσω από το '", $.branch, "' κατά ", $.number, " υποβολές, και μπορεί να κάνει ταχεία προώθηση."),
        seq("Ο κλάδος σας είναι πίσω από το '", $.branch, "' κατά ", $.number, " υποβολή, και μπορεί να κάνει ταχεία προώθηση."),
        seq("Ваша ветка отстает от «", $.branch, "» на ", $.number, " коммит и может быть перемотана вперед."),
        seq("Ваша ветка отстает от «", $.branch, "» на ", $.number, " коммита и может быть перемотана вперед."),
        seq("Ваша ветка отстает от «", $.branch, "» на ", $.number, " коммитов и может быть перемотана вперед."),
        seq("Ваша гілка відстає від \"", $.branch, "\" на ", $.number, " коміт, і її можна перемотати вперед."),
        seq("Ваша гілка відстає від \"", $.branch, "\" на ", $.number, " коміти, і її можна перемотати вперед."),
        seq("Ваша гілка відстає від гілки '", $.branch, "' на ", $.number, " комітів, і її можна перемотати вперед."),
        seq("Ветка отстает от «", $.branch, "» на ", $.number, " коммит и может быть быстро перемотана."),
        seq("Ветка отстает от «", $.branch, "» на ", $.number, " коммита и может быть быстро перемотана."),
        seq("Ветка отстает от «", $.branch, "» на ", $.number, " коммитов и может быть быстро перемотана."),
        seq("Клонът ви е с ", $.number, " подаване зад „", $.branch, "“ и може да бъде превъртян."),
        seq("Клонът ви е с ", $.number, " подавания зад „", $.branch, "“ и може да бъде превъртян."),
        seq("您的分支落后 '", $.branch, "' 共 ", $.number, " 个提交，并且可以快进。"),
        seq("您的分支落後 '", $.branch, "' 共 ", $.number, " 個提交，並且可以快轉。"),
        seq("브랜치가 '", $.branch, "'보다 ", $.number, "개 커밋 뒤에 있고, 앞으로 돌릴 수 있습니다.")
        // end behind
      ),

    _ahead: ($) =>
      // prettier-ignore
      choice(
        // ahead
        seq("Cabang Anda mendahului '", $.branch, "' oleh ", $.number, " komit."),
        seq("Dalınız '", $.branch, "' dalından ", $.number, " işleme ileride."),
        seq("Din gren ligger före \"", $.branch, "\" med ", $.number, " incheckning."),
        seq("Din gren ligger före \"", $.branch, "\" med ", $.number, " incheckningar."),
        seq("Din gren ligger före ”", $.branch, "” med ", $.number, " incheckning."),
        seq("Din gren ligger före ”", $.branch, "” med ", $.number, " incheckningar."),
        seq("Ihr Branch ist ", $.number, " Commit vor '", $.branch, "'."),
        seq("Ihr Branch ist ", $.number, " Commits vor '", $.branch, "'."),
        seq("Il tuo branch è avanti rispetto a '", $.branch, "' di ", $.number, " commit."),
        seq("La vostra branca està ", $.number, " comissions per davant de «", $.branch, "»."),
        seq("La vostra branca està ", $.number, " comissió per davant de «", $.branch, "»."),
        seq("Nhánh của bạn đứng trước '", $.branch, "' ", $.number, " lần chuyển giao."),
        seq("Nhánh của bạn đứng trước “", $.branch, "” ", $.number, " lần chuyển giao."),
        seq("O seu ramo está à frente de '", $.branch, "' por ", $.number, " commit."),
        seq("O seu ramo está à frente de '", $.branch, "' por ", $.number, " commits."),
        seq("Teu ramo está à frente de '", $.branch, "' por ", $.number, " memória."),
        seq("Teu ramo está à frente de '", $.branch, "' por ", $.number, " memórias."),
        seq("Tu rama está adelantada a '", $.branch, "' por ", $.number, " commit."),
        seq("Tu rama está adelantada a '", $.branch, "' por ", $.number, " commits."),
        seq("Twoja gałąź jest do przodu względem „", $.branch, "” o ", $.number, " zapis."),
        seq("Twoja gałąź jest do przodu względem „", $.branch, "” o ", $.number, " zapisy."),
        seq("Twoja gałąź jest do przodu względem „", $.branch, "” o ", $.number, " zapisów."),
        seq("Votre branche est en avance sur '", $.branch, "' de ", $.number, " commit."),
        seq("Votre branche est en avance sur '", $.branch, "' de ", $.number, " commits."),
        seq("Your branch is ahead of '", $.branch, "' by ", $.number, " commit."),
        seq("Your branch is ahead of '", $.branch, "' by ", $.number, " commits."),
        seq("Ο κλάδος σας είναι μπροστά από το '", $.branch, "' κατά ", $.number, " υποβολές."),
        seq("Ο κλάδος σας είναι μπροστά από το '", $.branch, "' κατά ", $.number, " υποβολή."),
        seq("Ваша ветка опережает «", $.branch, "» на ", $.number, " коммит."),
        seq("Ваша ветка опережает «", $.branch, "» на ", $.number, " коммита."),
        seq("Ваша ветка опережает «", $.branch, "» на ", $.number, " коммитов."),
        seq("Ваша гілка випереджає '", $.branch, "' на ", $.number, " коміт."),
        seq("Ваша гілка випереджає '", $.branch, "' на ", $.number, " коміти."),
        seq("Ваша гілка випереджає '", $.branch, "' на ", $.number, " комітів."),
        seq("Ваша гілка випереджає \"", $.branch, "\" на ", $.number, " коміт."),
        seq("Ваша гілка випереджає \"", $.branch, "\" на ", $.number, " коміти."),
        seq("Ваша гілка випереджає \"", $.branch, "\" на ", $.number, " комітів."),
        seq("Клонът ви е с ", $.number, " подаване пред „", $.branch, "“."),
        seq("Клонът ви е с ", $.number, " подавания пред „", $.branch, "“."),
        seq("您的分支領先 '", $.branch, "' 共 ", $.number, " 個提交。"),
        seq("您的分支领先 '", $.branch, "' 共 ", $.number, " 个提交。"),
        seq("브랜치가 '", $.branch, "'보다 ", $.number, "개 커밋만큼 앞에 있습니다.")
        // end ahead
      ),

    _detached_head: ($) =>
      seq(
        alias(
          // prettier-ignore
          choice(
            // detached_head
            "HEAD desacoplada en ",
            "HEAD desanexada em ",
            "HEAD destacada em ",
            "HEAD detached at ",
            "HEAD détachée sur ",
            "HEAD frånkopplad vid ",
            "HEAD losgelöst bei ",
            "HEAD odłączone na ",
            "HEAD scollegato su ",
            "HEAD separat a ",
            "HEAD terlepas pada ",
            "HEAD được tách rời tại ",
            "HEAD şurada ayrıldı: ",
            "HEAD відʼєднано на ",
            "HEAD отделён на ",
            "HEAD가 다음 위치에서 분리: ",
            "Αποσυνδεδεμένο HEAD στο ",
            "Отсоединённый указатель HEAD указывает на ",
            "Указателят „HEAD“ не е свързан и е при ",
            "头指针分离于 ",
            "開頭指標分離於 "
            // end detached_head
          ),
          $.text
        ),
        alias($._commit, $.branch),
        NEWLINE
      ),

    _rebasing: ($) =>
      // prettier-ignore
      choice(
        // rebasing
        seq("Actualment esteu fent «rebase» de la branca «", $.branch, "» en «", $.branch, "»."),
        seq("Anda sedang mendasarkan ulang cabang '", $.branch, "' pada '", $.branch, "'."),
        seq("Attualmente stai eseguendo il rebase del branch '", $.branch, "' su '", $.branch, "'."),
        seq("Bạn hiện nay đang thực hiện việc “rebase” nhánh “", $.branch, "” trên “", $.branch, "”."),
        seq("Bạn hiện đang thực hiện rebase (cải tổ) nhánh '", $.branch, "' lên '", $.branch, "'."),
        seq("Du håller på att ombasera grenen \"", $.branch, "\" ovanpå \"", $.branch, "\"."),
        seq("Du håller på att ombasera grenen ”", $.branch, "” ovanpå ”", $.branch, "”."),
        seq("Está a realizar rebase do ramo '", $.branch, "' sobre '", $.branch, "'."),
        seq("Estás aplicando un rebase de la rama '", $.branch, "' en '", $.branch),
        seq("Estás aplicando un rebase de la rama '", $.branch, "' sobre '", $.branch),
        seq("Estás rebaseando ramo '", $.branch, "' sobre '", $.branch, "'."),
        seq("Przestawiasz właśnie gałąź „", $.branch, "” na „", $.branch, "”."),
        seq("Sie sind gerade beim Rebase von Branch '", $.branch, "' auf '", $.branch, "'."),
        seq("Vous êtes en train de rebaser la branche '", $.branch, "' sur '", $.branch, "'."),
        seq("You are currently rebasing branch '", $.branch, "' on '", $.branch, "'."),
        seq("Şu anda '", $.branch, "' dalını '", $.branch, "' üzerine yeniden temellendiriyorsunuz."),
        seq("Αυτή τη στιγμή κάνετε rebase τον κλάδο '", $.branch, "' στο '", $.branch, "'."),
        seq("В момента пребазирате клона „", $.branch, "“ върху „", $.branch, "“."),
        seq("Вы сейчас перемещаете ветку «", $.branch, "» над «", $.branch, "»."),
        seq("Наразі ви перебазовуєте гілку '", $.branch, "' на '", $.branch, "'."),
        seq("Наразі ви перебазовуєте гілку \"", $.branch, "\" на \"", $.branch, "\"."),
        seq("您在執行將分支 '", $.branch, "' 重定基底到 '", $.branch, "' 的動作。"),
        seq("您在执行将分支 '", $.branch, "' 变基到 '", $.branch, "' 的操作。"),
        seq("현재 '", $.branch, "' 브랜치를 '", $.branch, "' 위로 리베이스하는 중입니다.")
        // end rebasing
      ),

    _interactive_rebasing: ($) =>
      // prettier-ignore
      choice(
        // interactive_rebase
        seq("interactive rebase in progress; onto ", $.branch),
        seq("interaktiv ombasering pågår; ovanpå ", $.branch),
        seq("interaktives Rebase im Gange; auf ", $.branch),
        seq("rebasage interactif en cours ; sur ", $.branch),
        seq("rebase có tương tác đang được thực hiện; lên trên ", $.branch),
        seq("rebase interactivo en progreso; en ", $.branch),
        seq("rebase interactivo en progreso; sobre ", $.branch),
        seq("rebase interativo em curso; sobre ", $.branch),
        seq("rebase interattivo in corso su ", $.branch),
        seq("rebase ở chế độ tương tác đang được thực hiện; lên trên ", $.branch),
        seq("sedang mendasarkan ulang interaktif; ke ", $.branch),
        seq("trwa interaktywne przestawianie na ", $.branch),
        seq("«rebase» interactiu en curs; sobre ", $.branch),
        seq("şunun üzerine etkileşimli yeniden temellendirme sürmekte: ", $.branch),
        seq("εκτελείται διαδραστικό rebase, πάνω στο ", $.branch),
        seq("извършвате интерактивно пребазиране върху ", $.branch),
        seq("интерактивное перемещение в процессе; над ", $.branch),
        seq("триває інтерактивне перебазування на ", $.branch),
        seq("інтерактивне перебазовування в процесі; на ", $.branch),
        seq("互動式重定基底動作正在進行中；至 ", $.branch),
        seq("交互式变基操作正在进行中；至 ", $.branch),
        seq("대화형 리베이스 진행 중. 갈 위치는 ", $.branch)
        // end interactive_rebase
      ),
  },
});
