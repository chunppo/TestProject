set nu
set shiftwidth=4
set tabstop=4
set autoindent
set cindent

set tags=/usr/include/tags

imap <f5> <ESC>:w<cr>:! chmod +x %<cr> <ESC>:edit!<cr><ESC>:! clear; ./%<cr>
