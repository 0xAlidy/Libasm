global _ft_write
section .text

_ft_write:
 push rbp
 mov rbp, rsp
 mov rax, 0X2000004
 syscall
 jc error
 leave
 ret

error:
 mov rax, -1
 leave
 ret
