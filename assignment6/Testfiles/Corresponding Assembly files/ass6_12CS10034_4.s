.data
 STR1:
.string "Enter a number whose factorial you want to know: "
STR2:
.string "The value is: "
STR3:
.string "\n"
STR4:
.string "Enter a number n whose fibonacci(n) you want to know: "
STR5:
.string "The value is: "
STR6:
.string "\n"

.text
 .globl factorial
 .type factorial, @function
factorial:
pushl	%ebp
movl 	%esp,%ebp
subl	$48,%esp
movl $1, -12(%ebp)
movl 8(%ebp), %eax
cmpl -12(%ebp), %eax
je  .LBNO1
jmp  .LBNO2
.LBNO1:
movl $1, -16(%ebp)
jmp  .LBNO3
.LBNO2:
movl $0, -16(%ebp)
jmp  .LBNO4
.LBNO4:
movl $0, -20(%ebp)
movl 8(%ebp), %eax
cmpl -20(%ebp), %eax
je  .LBNO5
jmp  .LBNO6
.LBNO5:
movl $1, -24(%ebp)
jmp  .LBNO3
.LBNO6:
movl $0, -24(%ebp)
jmp  .LBNO7
jmp  .LBNO8
.LBNO3:
movl $1, -32(%ebp)
movl -32(%ebp), %eax
movl %eax, -8(%ebp)
jmp  .LBNO8
.LBNO7:
movl $1, -36(%ebp)
movl 8(%ebp), %eax
movl -36(%ebp), %edx
subl %edx, %eax
movl %eax, -40(%ebp)
movl -40(%ebp), %eax
pushl %eax
call factorial
movl %eax, -44(%ebp)
movl 8(%ebp), %eax
movl -44(%ebp), %edx
imull %edx, %eax
movl %eax, -48(%ebp)
movl -48(%ebp), %eax
movl %eax, -8(%ebp)
jmp  .LBNO8
.LBNO8:
movl -8(%ebp), %eax
movl %ebp,%esp
popl %ebp
ret
.globl fibonacci
 .type fibonacci, @function
fibonacci:
pushl	%ebp
movl 	%esp,%ebp
subl	$68,%esp
movl $1, -20(%ebp)
movl 8(%ebp), %eax
cmpl -20(%ebp), %eax
je  .LBNO9
jmp  .LBNO10
.LBNO9:
movl $1, -24(%ebp)
jmp  .LBNO11
.LBNO10:
movl $0, -24(%ebp)
jmp  .LBNO12
jmp  .LBNO13
.LBNO11:
movl $1, -28(%ebp)
movl -28(%ebp), %eax
movl %eax, -8(%ebp)
jmp  .LBNO13
.LBNO12:
movl $0, -32(%ebp)
movl 8(%ebp), %eax
cmpl -32(%ebp), %eax
je  .LBNO14
jmp  .LBNO15
.LBNO14:
movl $1, -36(%ebp)
jmp  .LBNO16
.LBNO15:
movl $0, -36(%ebp)
jmp  .LBNO17
jmp  .LBNO18
.LBNO16:
movl $0, -40(%ebp)
movl -40(%ebp), %eax
movl %eax, -8(%ebp)
jmp  .LBNO13
.LBNO17:
movl $1, -44(%ebp)
movl 8(%ebp), %eax
movl -44(%ebp), %edx
subl %edx, %eax
movl %eax, -48(%ebp)
movl -48(%ebp), %eax
pushl %eax
call fibonacci
movl %eax, -52(%ebp)
movl -52(%ebp), %eax
movl %eax, -12(%ebp)
movl $2, -56(%ebp)
movl 8(%ebp), %eax
movl -56(%ebp), %edx
subl %edx, %eax
movl %eax, -60(%ebp)
movl -60(%ebp), %eax
pushl %eax
call fibonacci
movl %eax, -64(%ebp)
movl -64(%ebp), %eax
movl %eax, -16(%ebp)
movl -12(%ebp), %eax
movl -16(%ebp), %edx
addl %edx, %eax
movl %eax, -68(%ebp)
movl -68(%ebp), %eax
movl %eax, -8(%ebp)
jmp  .LBNO13
.LBNO18:
jmp  .LBNO13
.LBNO13:
movl -8(%ebp), %eax
movl %ebp,%esp
popl %ebp
ret
.globl main
 .type main, @function
main:
pushl	%ebp
movl 	%esp,%ebp
subl	$96,%esp
movl $STR1, -8(%ebp)
movl -8(%ebp), %eax
pushl %eax
call prints
movl %eax, -12(%ebp)
leal -20(%ebp), %eax
movl %eax, -24(%ebp)
movl -24(%ebp), %eax
pushl %eax
call readi
movl %eax, -28(%ebp)
movl -28(%ebp), %eax
movl %eax, -16(%ebp)
movl -16(%ebp), %eax
pushl %eax
call factorial
movl %eax, -36(%ebp)
movl -36(%ebp), %eax
movl %eax, -32(%ebp)
movl $STR2, -40(%ebp)
movl -40(%ebp), %eax
pushl %eax
call prints
movl %eax, -44(%ebp)
movl -32(%ebp), %eax
pushl %eax
call printi
movl $STR3, -48(%ebp)
movl -48(%ebp), %eax
pushl %eax
call prints
movl %eax, -52(%ebp)
movl $STR4, -56(%ebp)
movl -56(%ebp), %eax
pushl %eax
call prints
movl %eax, -60(%ebp)
leal -20(%ebp), %eax
movl %eax, -64(%ebp)
movl -64(%ebp), %eax
pushl %eax
call readi
movl %eax, -68(%ebp)
movl -68(%ebp), %eax
movl %eax, -16(%ebp)
movl $STR5, -76(%ebp)
movl -76(%ebp), %eax
pushl %eax
call prints
movl %eax, -80(%ebp)
movl -16(%ebp), %eax
pushl %eax
call fibonacci
movl %eax, -84(%ebp)
movl -84(%ebp), %eax
movl %eax, -72(%ebp)
movl -72(%ebp), %eax
pushl %eax
call printi
movl $STR6, -88(%ebp)
movl -88(%ebp), %eax
pushl %eax
call prints
movl %eax, -92(%ebp)
movl $0, -96(%ebp)
movl -96(%ebp), %eax
movl %ebp,%esp
popl %ebp
ret
