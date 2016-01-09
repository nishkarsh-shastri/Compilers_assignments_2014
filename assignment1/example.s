	.file	"example.c"
	.section	.rodata
	.align 4
.LC0:
	.string	"Enter the data, terminate with Ctrl+D"
.LC1:
	.string	"%d"
.LC2:
	.string	"Data in sorted Order are: "
.LC3:
	.string	"%d "
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
	subl	$432, %esp
	movl	$0, 24(%esp)
	movl	$.LC0, (%esp)
	call	puts
	jmp	.L2
.L3:
	addl	$1, 24(%esp)
.L2:
	leal	32(%esp), %eax
	movl	24(%esp), %edx
	sall	$2, %edx
	addl	%edx, %eax
	movl	%eax, 4(%esp)
	movl	$.LC1, (%esp)
	call	__isoc99_scanf
	cmpl	$-1, %eax
	jne	.L3
	movl	24(%esp), %eax
	movl	%eax, 4(%esp)
	leal	32(%esp), %eax
	movl	%eax, (%esp)
	call	selectionSort
	movl	$.LC2, (%esp)
	call	printf
	movl	$0, 28(%esp)
	jmp	.L4
.L5:
	movl	28(%esp), %eax
	movl	32(%esp,%eax,4), %eax
	movl	%eax, 4(%esp)
	movl	$.LC3, (%esp)
	call	printf
	addl	$1, 28(%esp)
.L4:
	movl	28(%esp), %eax
	cmpl	24(%esp), %eax
	jl	.L5
	movl	$10, (%esp)
	call	putchar
	movl	$0, %eax
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.globl	selectionSort
	.type	selectionSort, @function
selectionSort:
.LFB1:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	subl	$16, %esp
	movl	$0, -16(%ebp)
	jmp	.L8
.L12:
	movl	-16(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, -4(%ebp)
	movl	-16(%ebp), %eax
	movl	%eax, -12(%ebp)
	movl	-16(%ebp), %eax
	addl	$1, %eax
	movl	%eax, -8(%ebp)
	jmp	.L9
.L11:
	movl	-8(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	cmpl	-4(%ebp), %eax
	jle	.L10
	movl	-8(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, -4(%ebp)
	movl	-8(%ebp), %eax
	movl	%eax, -12(%ebp)
.L10:
	addl	$1, -8(%ebp)
.L9:
	movl	-8(%ebp), %eax
	cmpl	12(%ebp), %eax
	jl	.L11
	movl	-16(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	addl	%edx, %eax
	movl	(%eax), %eax
	movl	%eax, -4(%ebp)
	movl	-16(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	addl	%eax, %edx
	movl	-12(%ebp), %eax
	leal	0(,%eax,4), %ecx
	movl	8(%ebp), %eax
	addl	%ecx, %eax
	movl	(%eax), %eax
	movl	%eax, (%edx)
	movl	-12(%ebp), %eax
	leal	0(,%eax,4), %edx
	movl	8(%ebp), %eax
	addl	%eax, %edx
	movl	-4(%ebp), %eax
	movl	%eax, (%edx)
	addl	$1, -16(%ebp)
.L8:
	movl	12(%ebp), %eax
	subl	$1, %eax
	cmpl	-16(%ebp), %eax
	jg	.L12
	leave
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	selectionSort, .-selectionSort
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
