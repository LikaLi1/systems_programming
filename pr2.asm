section .data
    msg db "Hello world!", 0ah

section .text
    global _start

_start:
mov r9, 51
mov r10, 11
cmp r9, r10 сравнение-вычитание
jg if_branch условный переход, больше(>)
jl else_branch условный переход, меньше(<)
if_branch:
inc rdi, 1
jmp exit
else_branch:
mov rdi, 0
jmp exit излишний

; mov r9, 5
; mov r10, 11
; if_branch:
; inc rdi, 1
; jmp exit
; else_branch:
; mov rdi, 0
; jmp exit излишний

; mov r9, 5
; loop_start:
; inc rdi
; dec r9
; jnz loop_start условное

; mov rcx, 5
; loop_start:
; inc rdi
; loop loop_start

    ; jmp exit безусловный
    ; mov rdi,20

exit:
    mov rax, 60
    syscall
