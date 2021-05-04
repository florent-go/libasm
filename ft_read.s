global _ft_read
_ft_read :
	mov rax, 0x2000003
	syscall
	jc errors
	jmp return
errors :
	mov rax,-1
	ret
return :
	ret