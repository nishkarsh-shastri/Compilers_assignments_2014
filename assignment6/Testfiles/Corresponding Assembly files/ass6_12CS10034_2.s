.data
 STR1:
.string "Enter the value of a:"
STR2:
.string "Enter the value of b:"
STR3:
.string "Swapping the values of a and b by passing into a function as reference\n"
STR4:
.string "The value of a:"
STR5:
.string "\n"
STR6:
.string "The value of b:"
STR7:
.string "\n"

.text
 .globl main
 .type main, @function
main:
pushl	%ebp
movl 	%esp,%ebp
subl	$100,%esp
movl $STR1, -20(%ebp)
movl -20(%ebp), %eax
pushl %eax
call prints
movl %eax, -24(%ebp)
leal -16(%ebp), %eax
movl %eax, -28(%ebp)
movl -28(%ebp), %eax
pushl %eax
call readi
movl %eax, -32(%ebp)
movl -32(%ebp), %eax
movl %eax, -8(%ebp)
movl $STR2, -36(%ebp)
movl -36(%ebp), %eax
pushl %eax
call prints
movl %eax, -40(%ebp)
leal -16(%ebp), %eax
movl %eax, -44(%ebp)
movl -44(%ebp), %eax
pushl %eax
call readi
movl %eax, -48(%ebp)
movl -48(%ebp), %eax
movl %eax, -12(%ebp)
leal -8(%ebp), %eax
movl %eax, -52(%ebp)
leal -12(%ebp), %eax
movl %eax, -56(%ebp)
movl -52(%ebp), %eax
pushl %eax
movl -56(%ebp), %eax
pushl %eax
call swap
movl $STR3, -60(%ebp)
movl -60(%ebp), %eax
pushl %eax
call prints
movl %eax, -64(%ebp)
movl $STR4, -68(%ebp)
movl -68(%ebp), %eax
pushl %eax
call prints
movl %eax, -72(%ebp)
movl -8(%ebp), %eax
pushl %eax
call printi
movl $STR5, -76(%ebp)
movl -76(%ebp), %eax
pushl %eax
call prints
movl %eax, -80(%ebp)
movl $STR6, -84(%ebp)
movl -84(%ebp), %eax
pushl %eax
call prints
movl %eax, -88(%ebp)
movl -12(%ebp), %eax
pushl %eax
call printi
movl $STR7, -92(%ebp)
movl -92(%ebp), %eax
pushl %eax
call prints
movl %eax, -96(%ebp)
movl $0, -100(%ebp)
movl -100(%ebp), %eax
movl %ebp,%esp
popl %ebp
ret
.globl swap
 .type swap, @function
swap:
pushl	%ebp
movl 	%esp,%ebp
subl	$16,%esp
movl 8(%ebp), %eax
movl (%eax), %eax
movl %eax, -12(%ebp)
movl -12(%ebp), %eax
movl %eax, -8(%ebp)
movl 12(%ebp), %eax
movl (%eax), %eax
movl %eax, -16(%ebp)
movl 8(%ebp), %eax
movl -16(%ebp), %edx
movl %edx, (%eax)
movl 12(%ebp), %eax
movl -8(%ebp), %edx
movl %edx, (%eax)
movl $0, %eax
movl %ebp,%esp
popl %ebp
ret
