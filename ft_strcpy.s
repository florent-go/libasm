global _ft_strcpy
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
	mov rax,rdi
	mov BYTE [rdi + rcx], 0
	ret