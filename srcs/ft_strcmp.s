global  _ft_strcmp

section .text

_ft_strcmp:
 push rbp
 mov rbp, rsp
 xor rcx, rcx

loop:
 mov al, byte[rdi + rcx] 
 cmp byte[rdi + rcx], 0
 je exit
 cmp al, byte[rsi + rcx]
 jne exit
 inc rcx
 jmp loop

exit:
 sub al, byte[rsi + rcx]
 movsx rax, al
 pop rbp
 ret