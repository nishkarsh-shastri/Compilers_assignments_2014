	.file	"ass2_12CS10034.c"
	.text
	.globl	printi
	.type	printi, @function
printi:
.LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$52, %esp
	.cfi_offset 3, -12
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	movb	$48, -54(%ebp)
	movl	$0, -52(%ebp)
	cmpl	$0, 8(%ebp)
	jne	.L2
	movl	-52(%ebp), %eax
	leal	1(%eax), %edx
	movl	%edx, -52(%ebp)
	movzbl	-54(%ebp), %edx
	movb	%dl, -32(%ebp,%eax)
	jmp	.L3
.L2:
	cmpl	$0, 8(%ebp)
	jns	.L3
	movl	-52(%ebp), %eax
	leal	1(%eax), %edx
	movl	%edx, -52(%ebp)
	movb	$45, -32(%ebp,%eax)
	negl	8(%ebp)
	jmp	.L4
.L3:
	jmp	.L4
.L5:
	movl	8(%ebp), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, -40(%ebp)
	movl	-52(%ebp), %eax
	leal	1(%eax), %edx
	movl	%edx, -52(%ebp)
	movl	-40(%ebp), %edx
	movl	%edx, %ecx
	movzbl	-54(%ebp), %edx
	addl	%ecx, %edx
	movb	%dl, -32(%ebp,%eax)
	movl	8(%ebp), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, 8(%ebp)
.L4:
	cmpl	$0, 8(%ebp)
	jne	.L5
	movzbl	-32(%ebp), %eax
	cmpb	$45, %al
	jne	.L6
	movl	$1, -48(%ebp)
	jmp	.L7
.L6:
	movl	$0, -48(%ebp)
.L7:
	movl	-52(%ebp), %eax
	subl	$1, %eax
	movl	%eax, -44(%ebp)
	jmp	.L8
.L9:
	leal	-32(%ebp), %edx
	movl	-48(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movb	%al, -53(%ebp)
	movl	-48(%ebp), %eax
	leal	1(%eax), %edx
	movl	%edx, -48(%ebp)
	leal	-32(%ebp), %ecx
	movl	-44(%ebp), %edx
	addl	%ecx, %edx
	movzbl	(%edx), %edx
	movb	%dl, -32(%ebp,%eax)
	movl	-44(%ebp), %eax
	leal	-1(%eax), %edx
	movl	%edx, -44(%ebp)
	movzbl	-53(%ebp), %edx
	movb	%dl, -32(%ebp,%eax)
.L8:
	movl	-48(%ebp), %eax
	cmpl	-44(%ebp), %eax
	jl	.L9
	movl	-52(%ebp), %eax
	movl	%eax, -36(%ebp)
	leal	-32(%ebp), %eax
	movl	-36(%ebp), %edx
	movl	%eax, %ecx
#APP
# 39 "ass2_12CS10034.c" 1
	movl $4, %eax 
	movl $1, %ebx 
	int $128 
	
# 0 "" 2
#NO_APP
	movl	-52(%ebp), %eax
	movl	-12(%ebp), %ebx
	xorl	%gs:20, %ebx
	je	.L11
	call	__stack_chk_fail
.L11:
	addl	$52, %esp
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE0:
	.size	printi, .-printi
	.globl	prints
	.type	prints, @function
prints:
.LFB1:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$1044, %esp
	.cfi_offset 3, -12
	movl	8(%ebp), %eax
	movl	%eax, -1036(%ebp)
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	movl	$0, -1020(%ebp)
	jmp	.L13
.L14:
	movl	-1020(%ebp), %edx
	movl	-1036(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	leal	-1012(%ebp), %ecx
	movl	-1020(%ebp), %edx
	addl	%ecx, %edx
	movb	%al, (%edx)
	addl	$1, -1020(%ebp)
.L13:
	movl	-1020(%ebp), %edx
	movl	-1036(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	testb	%al, %al
	jne	.L14
	movl	-1020(%ebp), %eax
	movl	%eax, -1016(%ebp)
	leal	-1012(%ebp), %eax
	movl	-1016(%ebp), %edx
	movl	%eax, %ecx
#APP
# 61 "ass2_12CS10034.c" 1
	movl $4, %eax 
	movl $1, %ebx 
	int $128 
	
# 0 "" 2
#NO_APP
	movl	-1020(%ebp), %eax
	movl	-12(%ebp), %ebx
	xorl	%gs:20, %ebx
	je	.L16
	call	__stack_chk_fail
.L16:
	addl	$1044, %esp
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE1:
	.size	prints, .-prints
	.globl	printd
	.type	printd, @function
printd:
.LFB2:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$84, %esp
	.cfi_offset 3, -12
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	movb	$48, -62(%ebp)
	movl	$0, -60(%ebp)
	fldz
	flds	8(%ebp)
	fxch	%st(1)
	fucomip	%st(1), %st
	fstp	%st(0)
	jbe	.L18
	movl	-60(%ebp), %eax
	leal	1(%eax), %edx
	movl	%edx, -60(%ebp)
	movb	$45, -32(%ebp,%eax)
	flds	8(%ebp)
	fchs
	fstps	8(%ebp)
.L18:
	flds	8(%ebp)
	fnstcw	-74(%ebp)
	movzwl	-74(%ebp), %eax
	movb	$12, %ah
	movw	%ax, -76(%ebp)
	fldcw	-76(%ebp)
	fistpl	-56(%ebp)
	fldcw	-74(%ebp)
	cmpl	$0, -56(%ebp)
	jne	.L20
	movl	-60(%ebp), %eax
	leal	1(%eax), %edx
	movl	%edx, -60(%ebp)
	movzbl	-62(%ebp), %edx
	movb	%dl, -32(%ebp,%eax)
	jmp	.L21
.L20:
	jmp	.L21
.L22:
	movl	-56(%ebp), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	movl	%eax, -40(%ebp)
	movl	-60(%ebp), %eax
	leal	1(%eax), %edx
	movl	%edx, -60(%ebp)
	movl	-40(%ebp), %edx
	movl	%edx, %ecx
	movzbl	-62(%ebp), %edx
	addl	%ecx, %edx
	movb	%dl, -32(%ebp,%eax)
	movl	-56(%ebp), %ecx
	movl	$1717986919, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$2, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	movl	%eax, -56(%ebp)
.L21:
	cmpl	$0, -56(%ebp)
	jg	.L22
	movl	-60(%ebp), %eax
	subl	$1, %eax
	movl	%eax, -52(%ebp)
	movzbl	-32(%ebp), %eax
	cmpb	$45, %al
	jne	.L23
	movl	$1, -48(%ebp)
	jmp	.L25
.L23:
	movl	$0, -48(%ebp)
	jmp	.L25
.L26:
	leal	-32(%ebp), %edx
	movl	-52(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movb	%al, -61(%ebp)
	leal	-32(%ebp), %edx
	movl	-48(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	leal	-32(%ebp), %ecx
	movl	-52(%ebp), %edx
	addl	%ecx, %edx
	movb	%al, (%edx)
	leal	-32(%ebp), %edx
	movl	-48(%ebp), %eax
	addl	%eax, %edx
	movzbl	-61(%ebp), %eax
	movb	%al, (%edx)
	subl	$1, -52(%ebp)
	addl	$1, -48(%ebp)
.L25:
	movl	-48(%ebp), %eax
	cmpl	-52(%ebp), %eax
	jl	.L26
	movl	-60(%ebp), %eax
	leal	1(%eax), %edx
	movl	%edx, -60(%ebp)
	movb	$46, -32(%ebp,%eax)
	flds	8(%ebp)
	fldcw	-76(%ebp)
	fistpl	-80(%ebp)
	fldcw	-74(%ebp)
	movl	-80(%ebp), %eax
	movl	%eax, -80(%ebp)
	fildl	-80(%ebp)
	flds	8(%ebp)
	fsubp	%st, %st(1)
	fstps	-44(%ebp)
	flds	-44(%ebp)
	flds	.LC1
	fmulp	%st, %st(1)
	fstps	-44(%ebp)
	movl	$0, -48(%ebp)
	jmp	.L27
.L28:
	movl	-60(%ebp), %eax
	leal	1(%eax), %edx
	movl	%edx, -60(%ebp)
	flds	-44(%ebp)
	fldcw	-76(%ebp)
	fistpl	-80(%ebp)
	fldcw	-74(%ebp)
	movl	-80(%ebp), %edx
	movl	%edx, %ecx
	movzbl	-62(%ebp), %edx
	addl	%ecx, %edx
	movb	%dl, -32(%ebp,%eax)
	flds	-44(%ebp)
	fldcw	-76(%ebp)
	fistpl	-80(%ebp)
	fldcw	-74(%ebp)
	movl	-80(%ebp), %eax
	movl	%eax, -80(%ebp)
	fildl	-80(%ebp)
	flds	-44(%ebp)
	fsubp	%st, %st(1)
	fstps	-44(%ebp)
	flds	-44(%ebp)
	flds	.LC1
	fmulp	%st, %st(1)
	fstps	-44(%ebp)
	addl	$1, -48(%ebp)
.L27:
	cmpl	$5, -48(%ebp)
	jle	.L28
	movl	-60(%ebp), %eax
	movl	%eax, -36(%ebp)
	leal	-32(%ebp), %eax
	movl	-36(%ebp), %edx
	movl	%eax, %ecx
#APP
# 120 "ass2_12CS10034.c" 1
	movl $4, %eax 
	movl $1, %ebx 
	int $128 
	
# 0 "" 2
#NO_APP
	movl	-60(%ebp), %eax
	movl	-12(%ebp), %ebx
	xorl	%gs:20, %ebx
	je	.L32
	call	__stack_chk_fail
.L32:
	addl	$84, %esp
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE2:
	.size	printd, .-printd
	.globl	readi
	.type	readi, @function
readi:
.LFB3:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$68, %esp
	.cfi_offset 3, -12
	movl	8(%ebp), %eax
	movl	%eax, -60(%ebp)
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	movb	$10, -32(%ebp)
	movl	$1, -52(%ebp)
	movl	$0, -48(%ebp)
	movl	$1, -44(%ebp)
	movl	$0, -40(%ebp)
	movl	-60(%ebp), %eax
	movl	$0, (%eax)
	jmp	.L34
.L36:
	leal	-32(%ebp), %eax
	movl	$20, %edx
	movl	%eax, %ecx
#APP
# 140 "ass2_12CS10034.c" 1
	movl $3, %eax 
	movl $0, %ebx 
	int $128
	
# 0 "" 2
#NO_APP
	movl	%eax, -52(%ebp)
.L34:
	cmpl	$1, -52(%ebp)
	jne	.L35
	movzbl	-32(%ebp), %eax
	cmpb	$10, %al
	je	.L36
.L35:
	jmp	.L37
.L38:
	addl	$1, -40(%ebp)
.L37:
	leal	-32(%ebp), %edx
	movl	-40(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	cmpb	$32, %al
	je	.L38
	leal	-32(%ebp), %edx
	movl	-40(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	cmpb	$9, %al
	je	.L38
	leal	-32(%ebp), %edx
	movl	-40(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	cmpb	$10, %al
	jne	.L39
	movl	-60(%ebp), %eax
	movl	$1, (%eax)
	movl	$0, %eax
	jmp	.L49
.L39:
	leal	-32(%ebp), %edx
	movl	-40(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	cmpb	$45, %al
	jne	.L41
	movl	-40(%ebp), %eax
	addl	$2, %eax
	cmpl	-52(%ebp), %eax
	jne	.L42
	movl	-60(%ebp), %eax
	movl	$1, (%eax)
	movl	$0, %eax
	jmp	.L49
.L42:
	movl	$-1, -44(%ebp)
	addl	$1, -40(%ebp)
	jmp	.L43
.L41:
	jmp	.L43
.L46:
	leal	-32(%ebp), %edx
	movl	-40(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	cmpl	$9, %eax
	jg	.L44
	leal	-32(%ebp), %edx
	movl	-40(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	testl	%eax, %eax
	js	.L44
	leal	-32(%ebp), %edx
	movl	-40(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	movl	%eax, -36(%ebp)
	movl	-48(%ebp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, %edx
	movl	-36(%ebp), %eax
	addl	%edx, %eax
	movl	%eax, -48(%ebp)
	addl	$1, -40(%ebp)
	jmp	.L43
.L44:
	movl	-60(%ebp), %eax
	movl	$1, (%eax)
	movl	$0, %eax
	jmp	.L49
.L43:
	leal	-32(%ebp), %edx
	movl	-40(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	cmpb	$10, %al
	je	.L45
	leal	-32(%ebp), %edx
	movl	-40(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	cmpb	$32, %al
	je	.L45
	leal	-32(%ebp), %edx
	movl	-40(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	cmpb	$9, %al
	je	.L45
	leal	-32(%ebp), %edx
	movl	-40(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	testb	%al, %al
	jne	.L46
.L45:
	movl	-60(%ebp), %eax
	movl	$0, (%eax)
	movl	-60(%ebp), %eax
	movl	(%eax), %eax
	testl	%eax, %eax
	jne	.L47
	cmpl	$1, -52(%ebp)
	je	.L47
	movl	-44(%ebp), %eax
	imull	-48(%ebp), %eax
	jmp	.L49
.L47:
	leal	-32(%ebp), %edx
	movl	-52(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	cmpb	$10, %al
	jne	.L48
	movl	-52(%ebp), %eax
	subl	$1, %eax
	movzbl	-32(%ebp,%eax), %eax
	cmpb	$45, %al
	jne	.L48
	movl	-60(%ebp), %eax
	movl	$1, (%eax)
	movl	$0, %eax
	jmp	.L49
.L48:
	movl	-60(%ebp), %eax
	movl	$1, (%eax)
	movl	$0, %eax
.L49:
	movl	-12(%ebp), %ebx
	xorl	%gs:20, %ebx
	je	.L50
	call	__stack_chk_fail
.L50:
	addl	$68, %esp
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE3:
	.size	readi, .-readi
	.globl	readf
	.type	readf, @function
readf:
.LFB4:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	subl	$84, %esp
	.cfi_offset 3, -12
	movl	8(%ebp), %eax
	movl	%eax, -76(%ebp)
	movl	%gs:20, %eax
	movl	%eax, -12(%ebp)
	xorl	%eax, %eax
	movb	$10, -32(%ebp)
	movl	$1, -68(%ebp)
	movl	$1, -64(%ebp)
	movl	$0, -60(%ebp)
	movl	-76(%ebp), %edx
	movl	.LC0, %eax
	movl	%eax, (%edx)
	movl	.LC0, %eax
	movl	%eax, -56(%ebp)
	movl	.LC0, %eax
	movl	%eax, -52(%ebp)
	jmp	.L52
.L54:
	leal	-32(%ebp), %eax
	movl	$20, %edx
	movl	%eax, %ecx
#APP
# 212 "ass2_12CS10034.c" 1
	movl $3, %eax 
	movl $0, %ebx 
	int $128
	
# 0 "" 2
#NO_APP
	movl	%eax, -68(%ebp)
.L52:
	cmpl	$1, -68(%ebp)
	jne	.L53
	movzbl	-32(%ebp), %eax
	cmpb	$10, %al
	je	.L54
.L53:
	jmp	.L55
.L56:
	addl	$1, -60(%ebp)
.L55:
	leal	-32(%ebp), %edx
	movl	-60(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	cmpb	$32, %al
	je	.L56
	leal	-32(%ebp), %edx
	movl	-60(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	cmpb	$9, %al
	je	.L56
	leal	-32(%ebp), %edx
	movl	-60(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	cmpb	$10, %al
	jne	.L57
	movl	-76(%ebp), %edx
	movl	.LC0, %eax
	movl	%eax, (%edx)
	movl	$1, %eax
	jmp	.L73
.L57:
	leal	-32(%ebp), %edx
	movl	-60(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	cmpb	$45, %al
	jne	.L59
	movl	-60(%ebp), %eax
	addl	$2, %eax
	cmpl	-68(%ebp), %eax
	jne	.L60
	movl	-76(%ebp), %edx
	movl	.LC0, %eax
	movl	%eax, (%edx)
	movl	$1, %eax
	jmp	.L73
.L60:
	movl	$-1, -64(%ebp)
	addl	$1, -60(%ebp)
	jmp	.L61
.L59:
	jmp	.L61
.L64:
	leal	-32(%ebp), %edx
	movl	-60(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	cmpl	$9, %eax
	jg	.L62
	leal	-32(%ebp), %edx
	movl	-60(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	testl	%eax, %eax
	js	.L62
	leal	-32(%ebp), %edx
	movl	-60(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	movl	%eax, -36(%ebp)
	flds	-56(%ebp)
	flds	.LC1
	fmulp	%st, %st(1)
	fildl	-36(%ebp)
	faddp	%st, %st(1)
	fstps	-56(%ebp)
	addl	$1, -60(%ebp)
	jmp	.L61
.L62:
	movl	-76(%ebp), %edx
	movl	.LC0, %eax
	movl	%eax, (%edx)
	movl	$1, %eax
	jmp	.L73
.L61:
	leal	-32(%ebp), %edx
	movl	-60(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	cmpb	$10, %al
	je	.L63
	leal	-32(%ebp), %edx
	movl	-60(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	cmpb	$32, %al
	je	.L63
	leal	-32(%ebp), %edx
	movl	-60(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	cmpb	$9, %al
	je	.L63
	leal	-32(%ebp), %edx
	movl	-60(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	testb	%al, %al
	je	.L63
	leal	-32(%ebp), %edx
	movl	-60(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	cmpb	$46, %al
	jne	.L64
.L63:
	addl	$1, -60(%ebp)
	movl	-76(%ebp), %eax
	flds	(%eax)
	fadds	-56(%ebp)
	movl	-76(%ebp), %eax
	fstps	(%eax)
	movl	-60(%ebp), %eax
	subl	$1, %eax
	movzbl	-32(%ebp,%eax), %eax
	cmpb	$46, %al
	jne	.L65
	movl	$0, -48(%ebp)
	jmp	.L66
.L69:
	leal	-32(%ebp), %edx
	movl	-60(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	cmpl	$9, %eax
	jg	.L67
	leal	-32(%ebp), %edx
	movl	-60(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	testl	%eax, %eax
	js	.L67
	leal	-32(%ebp), %edx
	movl	-60(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	movsbl	%al, %eax
	subl	$48, %eax
	movl	%eax, -36(%ebp)
	flds	-52(%ebp)
	flds	.LC1
	fmulp	%st, %st(1)
	fildl	-36(%ebp)
	faddp	%st, %st(1)
	fstps	-52(%ebp)
	addl	$1, -60(%ebp)
	addl	$1, -48(%ebp)
	jmp	.L66
.L67:
	movl	-76(%ebp), %edx
	movl	.LC0, %eax
	movl	%eax, (%edx)
	movl	$1, %eax
	jmp	.L73
.L66:
	leal	-32(%ebp), %edx
	movl	-60(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	cmpb	$10, %al
	je	.L68
	leal	-32(%ebp), %edx
	movl	-60(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	cmpb	$32, %al
	je	.L68
	leal	-32(%ebp), %edx
	movl	-60(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	cmpb	$9, %al
	je	.L68
	leal	-32(%ebp), %edx
	movl	-60(%ebp), %eax
	addl	%edx, %eax
	movzbl	(%eax), %eax
	testb	%al, %al
	je	.L68
	cmpl	$6, -48(%ebp)
	jle	.L69
.L68:
	movl	$10, -44(%ebp)
	movl	$1, -40(%ebp)
	jmp	.L70
.L71:
	movl	-44(%ebp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%eax, %eax
	movl	%eax, -44(%ebp)
	addl	$1, -40(%ebp)
.L70:
	movl	-40(%ebp), %eax
	cmpl	-48(%ebp), %eax
	jl	.L71
	fildl	-44(%ebp)
	flds	-52(%ebp)
	fdivp	%st, %st(1)
	fstps	-52(%ebp)
	movl	-76(%ebp), %eax
	flds	(%eax)
	fadds	-52(%ebp)
	movl	-76(%ebp), %eax
	fstps	(%eax)
.L65:
	cmpl	$1, -68(%ebp)
	je	.L72
	movl	-76(%ebp), %eax
	flds	(%eax)
	fildl	-64(%ebp)
	fmulp	%st, %st(1)
	movl	-76(%ebp), %eax
	fstps	(%eax)
	movl	$0, %eax
	jmp	.L73
.L72:
	movl	-76(%ebp), %edx
	movl	.LC0, %eax
	movl	%eax, (%edx)
	movl	$1, %eax
.L73:
	movl	-12(%ebp), %ebx
	xorl	%gs:20, %ebx
	je	.L74
	call	__stack_chk_fail
.L74:
	addl	$84, %esp
	popl	%ebx
	.cfi_restore 3
	popl	%ebp
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
.LFE4:
	.size	readf, .-readf
	.section	.rodata
	.align 4
.LC0:
	.long	0
	.align 4
.LC1:
	.long	1092616192
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
