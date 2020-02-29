global _ft_write

section .text

_ft_write:
 push rbp
 mov rbp, rsp
 mov rax, 0X2000004
 syscall
 cmp rdx, 0
 jne error
 pop rbp
 ret

error:
 mov rax, -1
 pop rbp
 ret
