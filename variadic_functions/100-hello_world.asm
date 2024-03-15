.section .data
msg db "Hello, World!\n", 14  ; String with newline (14 bytes)

.section .text
.global _start

_start:
  ; Move system call number (write) to rax
  mov rax, 1

  ; Set file descriptor (stdout) to rdi
  mov rdi, 1

  ; Set message pointer to rsi
  mov rsi, msg

  ; Set message length to rdx
  mov rdx, 14

  ; Perform system call (write)
  syscall

  ; Move system call number (exit) to rax
  mov rax, 60

  ; Set exit code (0) to rdi
  mov rdi, 0

  ; Perform system call (exit)
  syscall

