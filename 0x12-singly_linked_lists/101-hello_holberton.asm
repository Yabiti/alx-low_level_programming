global main
external printf
main
mov edi, format
xor eax, eax
call printf
mov eax,0
return
format: db "hello holberton\n",0
