global    _ft_strdup
extern  _ft_strlen, _malloc, _ft_strcpy

section .text

_ft_strdup:
 push rbp
 mov rbp, rsp
 sub rsp, 8
 call _ft_strlen
 inc rax
 push rdi
 mov rdi, rax
 call _malloc
 cmp rax, 0
 je exit
 pop rdi
 mov rsi, rdi
 mov rdi, rax
 call _ft_strcpy
 leave
 ret

exit:
 pop rdi
 leave
 ret
