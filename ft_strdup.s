global _ft_strdup
extern _ft_strlen
extern _ft_strcpy
extern _malloc
_ft_strdup :
	call _ft_strlen
	push rdi
	inc rax
	mov rdi,rax
	call _malloc
	cmp rax,0
	jz errors
	mov rdi,rax
	pop rsi
	call _ft_strcpy
	jmp return
errors :
	mov rax,-1
	ret

return :
	ret