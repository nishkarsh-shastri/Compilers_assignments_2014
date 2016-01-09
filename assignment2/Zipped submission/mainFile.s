	.file	"mainFile.c"
	.section	.rodata
.LC0:
	.string	"Write the integer n:"
.LC1:
	.string	"The integer read is : "
.LC2:
	.string	"Wrong Input\n"
.LC3:
	.string	"\nEnter the decimal number: "
.LC4:
	.string	"The floating number is :"
.LC5:
	.string	"\n"
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
	movl	$0, 20(%esp)
	movl	$.LC0, (%esp)
	call	prints
	leal	20(%esp), %eax
	movl	%eax, (%esp)
	call	readi
	movl	%eax, 28(%esp)
	movl	20(%esp), %eax
	cmpl	$1, %eax
	je	.L2
	movl	$.LC1, (%esp)
	call	prints
	movl	28(%esp), %eax
	movl	%eax, (%esp)
	call	printi
	jmp	.L3
.L2:
	movl	$.LC2, (%esp)
	call	prints
.L3:
	movl	$.LC3, (%esp)
	call	prints
	leal	24(%esp), %eax
	movl	%eax, (%esp)
	call	readf
	movl	%eax, 20(%esp)
	movl	20(%esp), %eax
	testl	%eax, %eax
	jne	.L4
	movl	$.LC4, (%esp)
	call	prints
	movl	24(%esp), %eax
	movl	%eax, (%esp)
	call	printd
	jmp	.L5
.L4:
	movl	$.LC2, (%esp)
	call	prints
.L5:
	movl	$.LC5, (%esp)
	call	prints
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
