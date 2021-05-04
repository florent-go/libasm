global _ft_write
_ft_write :
	mov r8, rdx
	mov rax, 0x2000004
	syscall
	cmp rax, 0
	jl errors
	jmp return

errors :
	mov rax, -1
	ret

return :
	mov rax, r8
	ret