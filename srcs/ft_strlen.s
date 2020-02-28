global _ft_strlen

section .text

_ft_strlen:
 push rbp
 mov rbp, rsp
 xor rax, rax

loop:
 cmp byte[rdi + rax], 0 
 je exit  
 inc rax 
 jmp loop 

exit:
  pop rbp
  ret 
