section .data
    msg db "Hello world!", 0ah

section .text
    global _start

; _start:
;     mov rax, 12
;     mov rbx, 10

;     cmp rax, rbx

;     jg if_first
;     jmp else_first

; if_first:
;     mov rdi, 1
;     jmp exit

; else_first:
;     mov rdi, 2
;     jmp exit

; exit:
;     mov rax, 60
;     syscall

_start:
    mov rax, 7
    mov rdi, 0

sub_second:
    add rdi, 5
    dec rax
    jnz sub_second

exit:
    mov rax, 60
    mov rdi, rdi
    syscall

; _start:
;     mov rsi, 18
;     mov rdi, 15
;     mov rdx, 13
    
;     call find_max

;     mov rdi, rax
;     mov rax, 60
;     syscall
    
; find_max:
;     mov rax, rdi

;     cmp rsi, rax
;     jl find_new
;     mov rax, rsi

; find_new:
;     cmp rdx, rax
;     jl ret_call
;     mov rax, rdx

; ret_call:
;     ret
