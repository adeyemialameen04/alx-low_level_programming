section .data
    hello db 'Hello, Holberton',0xa

section .text
    global main
    extern printf

main:
    ; Prepare the arguments for printf
    mov rdi, hello  ; The format string
    xor rax, rax    ; 0 floating point parameters
    ; Call printf
    call printf
    ; Return 0
    xor eax, eax
    ret
