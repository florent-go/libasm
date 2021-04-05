_ft_strcmp :
	xor rcx,rcx
ak
copy :
	cmp byte[rsi + rcx],0
	mov dl,[rsi +rcx]
	cmp byte[rdi +rcx],dl
	jne resultat
	inc rcx
	jmp boucle

resultat :
	sub [rdi + rcx],dl
	ret
