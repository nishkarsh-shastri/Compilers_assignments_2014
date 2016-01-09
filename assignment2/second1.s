	.file	"second1.c"
	.section	.rodata
.LC0:
	.string	"My second program\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	andl	$-16, %esp
	subl	$32, %esp
	movl	$.LC0, 28(%esp)
	movl	$19, 8(%esp)
	movl	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$1, (%esp)
	call	write
	movl	$0, (%esp)
	call	_exit
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
