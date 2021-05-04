global _ft_strcmp
_ft_strcmp :
	xor rcx,rcx

copy :
	cmp byte[rsi + rcx],0
	jz resultat
	cmp byte[rdi + rcx],0
	jz resultat
	mov dl,byte[rsi +rcx]
	cmp byte[rdi + rcx],dl
	jnz resultat
	inc rcx
	jmp copy
resultat :
	movzx rdx,byte[rsi + rcx]
	movzx rax,byte[rdi + rcx]
	sub rax,rdx
	ret
