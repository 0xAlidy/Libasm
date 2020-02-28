global _ft_read

section .text

_ft_read:
    mov rax, 0X2000003
    syscall
    cmp rsi, 0
    je neg
    cmp rdx, 0
    jl neg
    ret

neg:
    mov rax, -1
    ret