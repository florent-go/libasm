_ft_strlen :
	xor rcx,rcx
boucle :
	cmp byte[rdi + rcx], 0
	jz resulta
	inc rcx
	jmp check

resulta :
	mov rax,rcx
	ret