global _ft_strlen
_ft_strlen :
	xor rcx,rcx
boucle :
	cmp byte[rdi + rcx], 0
	jz resulta
	inc rcx
	jmp boucle

resulta :
	mov rax,rcx
	ret