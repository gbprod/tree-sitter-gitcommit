(comment) @comment
(comment (title) @text.title)
(comment (text) @text)
(comment (date) @text)
(comment (branch) @text.reference)
(comment (number) @number)
(comment (change) @keyword)
(comment (filepath) @text.uri)
(comment (arrow) @punctuation.delimiter)

(subject) @text.title
(subject (overflow) @text)
(prefix (type) @keyword)
(prefix (scope) @parameter)
(prefix [
    "("
    ")"
    ":"
] @punctuation.delimiter)
(prefix [
    "!"
] @punctuation.special)

(message) @text

(trailer (token) @keyword)
(trailer (value) @text)

(breaking_change (token) @text.warning)
(breaking_change (value) @text)

(scissor) @comment

(ERROR) @error
