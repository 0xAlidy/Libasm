global _ft_read

section .text

_ft_read:
 push rbp
 mov rbp, rsp
 mov rax, 0X2000003
 syscall
 cmp rdx, 0
 jne error
 pop rbp
 ret

error:
 mov rax, -1
 pop rbp
 ret