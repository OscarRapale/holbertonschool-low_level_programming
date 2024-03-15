section .data
    hello_world db 'Hello, World!', 10 ; String to print

section .text
    global _start

_start:

    mov rax, 1              ; System call number for write
    mov rdi, 1              ; File descriptor: 1 (stdout)
    mov rsi, hello_world    ; Pointer to the string to print
    mov rdx, 14             ; Length of the string

    ; Invoke the write syscall
    syscall

    ; Exit the program
    mov rax, 60
    xor rdi, rdi
    syscall

