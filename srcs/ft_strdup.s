global    _ft_strdup
extern  _ft_strlen, _malloc, _ft_strcpy

section .text

_ft_strdup:
 call _ft_strlen
 inc rax
 push rdi
 mov rdi, rax
 call _malloc
 pop rdi
 mov rsi, rdi
 mov rdi, rax
 call _ft_strcpy
 ret

