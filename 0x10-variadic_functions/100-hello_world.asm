section  .text
global   _start

_start:

    mov  edx, len
    mov  ecx, msg
    mov  ebx, 1
    mov  eax, 4
    int  0x80

    mov  eax, 1
    int  0x80

section  .data

msg  DB  "Hello, World"
len  equ $ - msg
