;program prints "Hello, Holberton"
;according to ALX software engineering program task
;it should be a 64bit program

;here comes the data section
SECTION.data ;initializing what will we print

msgToPrint: db "Hello, Holberton", 0	;the print
msgLength: db "%s", 10, 0		;length of string

;here comes the code section
SECTION.text

extern printf ;so it could be used 
glabal main
main:
push rbp
mov rbp
mov rsp

mov rdi,msgLength
mov rsi,msgToPrint
mov rax,0
call printf

pop rbp
mov rax,0
ret
