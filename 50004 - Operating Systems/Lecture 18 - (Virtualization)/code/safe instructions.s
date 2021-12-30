; MASM (Microsoft macro ASseMbler) syntax for convenient lstlisting highlighting
mov eax, [ebp + 16]        ; eax =  *(ebp + 16)
lea eax, [ebx + 8]         ; eax = ebx + 8
call printf                ; call to printf
add eax, DWORD PTR 12[ebp] ; eax += 4 bytes below 
inc eax                    ; eax++