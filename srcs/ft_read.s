global _ft_read
extern  _error

section .text

_ft_read:
 push rbp
 mov rbp, rsp
 mov rax, 0X2000003
 syscall
 jc error
 leave
 ret

error:
 mov rax, -1
 leave
 ret