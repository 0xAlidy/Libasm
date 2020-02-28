global _ft_strcpy

section .text

_ft_strcpy:
 push rbp
 mov rbp, rsp
 xor rcx,rcx

loop:
 mov bx, [rsi + rcx]
 mov [rdi + rcx], bx
 inc rcx
 cmp byte[rsi + rcx], 0
 jne loop

exit:
 mov rax, rdi
 pop rbp
 ret