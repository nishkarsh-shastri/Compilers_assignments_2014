.data
 STR1:
.string "Enter three numbers whose maximum among them you want to know\n"
STR2:
.string "Enter the first number: "
STR3:
.string "Enter the second number: "
STR4:
.string "Enter the third number: "
STR5:
.string "The max value is: "
STR6:
.string "\n"
STR7:
.string "Lets do expression tests:\n"
STR8:
.string "a = b*c*a = "
STR9:
.string "\n"
STR10:
.string "b = a/c = "
STR11:
.string "\n"
STR12:
.string "c = a%b = "
STR13:
.string "\n"

.text
 .globl findmax
 .type findmax, @function
findmax:
pushl	%ebp
movl 	%esp,%ebp
subl	$20,%esp
movl 8(%ebp), %eax
movl %eax, -8(%ebp)
movl 12(%ebp), %eax
cmpl 8(%ebp), %eax
jg  .LBNO1
jmp  .LBNO2
.LBNO1:
movl $1, -12(%ebp)
jmp  .LBNO3
.LBNO2:
movl $0, -12(%ebp)
jmp  .LBNO4
jmp  .LBNO5
.LBNO3:
movl 12(%ebp), %eax
cmpl 16(%ebp), %eax
jg  .LBNO6
jmp  .LBNO7
.LBNO6:
movl $1, -16(%ebp)
jmp  .LBNO8
.LBNO7:
movl $0, -16(%ebp)
jmp  .LBNO9
jmp  .LBNO10
.LBNO8:
movl 12(%ebp), %eax
movl %eax, -8(%ebp)
jmp  .LBNO5
.LBNO9:
movl 16(%ebp), %eax
movl %eax, -8(%ebp)
jmp  .LBNO5
.LBNO10:
jmp  .LBNO5
.LBNO4:
movl 16(%ebp), %eax
cmpl 8(%ebp), %eax
jg  .LBNO11
jmp  .LBNO12
.LBNO11:
movl $1, -20(%ebp)
jmp  .LBNO13
.LBNO12:
movl $0, -20(%ebp)
jmp  .LBNO5
jmp  .LBNO14
.LBNO13:
movl 16(%ebp), %eax
movl %eax, -8(%ebp)
jmp  .LBNO5
.LBNO14:
jmp  .LBNO5
.LBNO5:
movl -8(%ebp), %eax
movl %ebp,%esp
popl %ebp
ret
.globl main
 .type main, @function
main:
pushl	%ebp
movl 	%esp,%ebp
subl	$176,%esp
movl $STR1, -8(%ebp)
movl -8(%ebp), %eax
pushl %eax
call prints
movl %eax, -12(%ebp)
movl $STR2, -32(%ebp)
movl -32(%ebp), %eax
pushl %eax
call prints
movl %eax, -36(%ebp)
leal -28(%ebp), %eax
movl %eax, -40(%ebp)
movl -40(%ebp), %eax
pushl %eax
call readi
movl %eax, -44(%ebp)
movl -44(%ebp), %eax
movl %eax, -16(%ebp)
movl $STR3, -48(%ebp)
movl -48(%ebp), %eax
pushl %eax
call prints
movl %eax, -52(%ebp)
leal -28(%ebp), %eax
movl %eax, -56(%ebp)
movl -56(%ebp), %eax
pushl %eax
call readi
movl %eax, -60(%ebp)
movl -60(%ebp), %eax
movl %eax, -20(%ebp)
movl $STR4, -64(%ebp)
movl -64(%ebp), %eax
pushl %eax
call prints
movl %eax, -68(%ebp)
leal -28(%ebp), %eax
movl %eax, -72(%ebp)
movl -72(%ebp), %eax
pushl %eax
call readi
movl %eax, -76(%ebp)
movl -76(%ebp), %eax
movl %eax, -24(%ebp)
movl -16(%ebp), %eax
pushl %eax
movl -20(%ebp), %eax
pushl %eax
movl -24(%ebp), %eax
pushl %eax
call findmax
movl %eax, -84(%ebp)
movl -84(%ebp), %eax
movl %eax, -80(%ebp)
movl $STR5, -88(%ebp)
movl -88(%ebp), %eax
pushl %eax
call prints
movl %eax, -92(%ebp)
movl -80(%ebp), %eax
pushl %eax
call printi
movl $STR6, -96(%ebp)
movl -96(%ebp), %eax
pushl %eax
call prints
movl %eax, -100(%ebp)
movl $STR7, -104(%ebp)
movl -104(%ebp), %eax
pushl %eax
call prints
movl %eax, -108(%ebp)
movl $STR8, -112(%ebp)
movl -112(%ebp), %eax
pushl %eax
call prints
movl %eax, -116(%ebp)
movl -20(%ebp), %eax
movl -24(%ebp), %edx
imull %edx, %eax
movl %eax, -120(%ebp)
movl -120(%ebp), %eax
movl -16(%ebp), %edx
imull %edx, %eax
movl %eax, -124(%ebp)
movl -124(%ebp), %eax
movl %eax, -16(%ebp)
movl -16(%ebp), %eax
pushl %eax
call printi
movl $STR9, -128(%ebp)
movl -128(%ebp), %eax
pushl %eax
call prints
movl %eax, -132(%ebp)
movl $STR10, -136(%ebp)
movl -136(%ebp), %eax
pushl %eax
call prints
movl %eax, -140(%ebp)
movl -16(%ebp), %eax
cltd
idivl -24(%ebp)
movl %eax, -144(%ebp)
movl -144(%ebp), %eax
movl %eax, -20(%ebp)
movl -20(%ebp), %eax
pushl %eax
call printi
movl $STR11, -148(%ebp)
movl -148(%ebp), %eax
pushl %eax
call prints
movl %eax, -152(%ebp)
movl $STR12, -156(%ebp)
movl -156(%ebp), %eax
pushl %eax
call prints
movl %eax, -160(%ebp)
movl -16(%ebp), %eax
cltd
idivl -20(%ebp)
movl %edx, -164(%ebp)
movl -164(%ebp), %eax
movl %eax, -24(%ebp)
movl -24(%ebp), %eax
pushl %eax
call printi
movl $STR13, -168(%ebp)
movl -168(%ebp), %eax
pushl %eax
call prints
movl %eax, -172(%ebp)
movl $0, -176(%ebp)
movl -176(%ebp), %eax
movl %ebp,%esp
popl %ebp
ret
