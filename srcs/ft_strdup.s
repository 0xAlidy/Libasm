global    _ft_strdup
extern  _ft_strlen, _malloc, _ft_strcpy

section .text

_ft_strdup:
 push rbp
 push r15
 mov rbp, rsp
 call _ft_strlen
 inc rax
 mov r15, rax
 push rdi
 mov rdi, rax
 call _malloc
 pop rdi
 mov rsi, rdi
 mov rdi, rax
 mov rdx, r15
 call _ft_strcpy
 pop r15
 pop rbp
 ret

