global _ft_write

section .text

_ft_write:
    mov rax, 0X2000004
    syscall
    cmp rsi, 0
    je neg
    cmp rdx, 0
    jl neg
    ret
neg:
    mov rax, -1
    ret
