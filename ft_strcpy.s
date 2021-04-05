_ft_strcpy :
	xor rcx,rcx

boucle :
	cmp byte[rsi + rcx],0
	jz resultat
	mov dl,[rsi +rcx]
	mov [rdi +rcx],dl
	inc rcx
	jmp boucle

resultat :
	mov [rdi + rcx],0
	mov rax,rdi
	ret