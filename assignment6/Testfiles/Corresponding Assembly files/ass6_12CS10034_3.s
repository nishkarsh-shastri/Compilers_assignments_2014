.data
 STR1:
.string "Enter the first number: "
STR2:
.string "Enter the second number: "
STR3:
.string "Enter the third number: "
STR4:
.string "The first number address was pointed to second one: "
STR5:
.string "\n"
STR6:
.string "The second number address was pointed to third one: "
STR7:
.string "\n"
STR8:
.string "After pointer arrangements second was greater than first by :"
STR9:
.string "\n"
STR10:
.string "After pointer arrangements second was less than first by :"
STR11:
.string "\n"
STR12:
.string "Character comparison"
STR13:
.string "\n"
STR14:
.string "q was less\n"
STR15:
.string "q was best\n"
STR16:
.string "p was best\n"
STR17:
.string "A character array handling. Ignore the garbage due to lack of terminal null char\n"
STR18:
.string "\n"

.text
 .globl main
 .type main, @function
main:
pushl	%ebp
movl 	%esp,%ebp
subl	$385,%esp
movl $STR1, -24(%ebp)
movl -24(%ebp), %eax
pushl %eax
call prints
movl %eax, -28(%ebp)
leal -20(%ebp), %eax
movl %eax, -32(%ebp)
movl -32(%ebp), %eax
pushl %eax
call readi
movl %eax, -36(%ebp)
movl -36(%ebp), %eax
movl %eax, -8(%ebp)
movl $STR2, -40(%ebp)
movl -40(%ebp), %eax
pushl %eax
call prints
movl %eax, -44(%ebp)
leal -20(%ebp), %eax
movl %eax, -48(%ebp)
movl -48(%ebp), %eax
pushl %eax
call readi
movl %eax, -52(%ebp)
movl -52(%ebp), %eax
movl %eax, -12(%ebp)
movl $STR3, -56(%ebp)
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
movb $97, -96(%ebp)
movzbl -96(%ebp), %eax
movb %al, -81(%ebp)
movb $98, -97(%ebp)
movzbl -97(%ebp), %eax
movb %al, -82(%ebp)
movb $100, -98(%ebp)
movzbl -98(%ebp), %eax
movb %al, -83(%ebp)
leal -81(%ebp), %eax
movl %eax, -102(%ebp)
movl -102(%ebp), %eax
movl %eax, -87(%ebp)
leal -82(%ebp), %eax
movl %eax, -106(%ebp)
movl -106(%ebp), %eax
movl %eax, -91(%ebp)
leal -83(%ebp), %eax
movl %eax, -110(%ebp)
movl -110(%ebp), %eax
movl %eax, -95(%ebp)
leal -8(%ebp), %eax
movl %eax, -114(%ebp)
movl -114(%ebp), %eax
movl %eax, -72(%ebp)
leal -12(%ebp), %eax
movl %eax, -118(%ebp)
movl -118(%ebp), %eax
movl %eax, -76(%ebp)
leal -16(%ebp), %eax
movl %eax, -122(%ebp)
movl -122(%ebp), %eax
movl %eax, -80(%ebp)
movl -76(%ebp), %eax
movl (%eax), %eax
movl %eax, -126(%ebp)
movl -72(%ebp), %eax
movl -126(%ebp), %edx
movl %edx, (%eax)
movl $STR4, -130(%ebp)
movl -130(%ebp), %eax
pushl %eax
call prints
movl %eax, -134(%ebp)
movl -8(%ebp), %eax
pushl %eax
call printi
movl $STR5, -138(%ebp)
movl -138(%ebp), %eax
pushl %eax
call prints
movl %eax, -142(%ebp)
movl -80(%ebp), %eax
movl (%eax), %eax
movl %eax, -146(%ebp)
movl -76(%ebp), %eax
movl -146(%ebp), %edx
movl %edx, (%eax)
movl $STR6, -150(%ebp)
movl -150(%ebp), %eax
pushl %eax
call prints
movl %eax, -154(%ebp)
movl -12(%ebp), %eax
pushl %eax
call printi
movl $STR7, -158(%ebp)
movl -158(%ebp), %eax
pushl %eax
call prints
movl %eax, -162(%ebp)
movl $0, -170(%ebp)
movl -170(%ebp), %eax
movl %eax, -166(%ebp)
movl -8(%ebp), %eax
cmpl -12(%ebp), %eax
jl  .LBNO1
jmp  .LBNO2
.LBNO1:
movl $1, -174(%ebp)
jmp  .LBNO3
.LBNO2:
movl $0, -174(%ebp)
jmp  .LBNO4
jmp  .LBNO5
.LBNO3:
movl -166(%ebp), %eax
movl %eax, -178(%ebp)
movl -166(%ebp), %eax
addl $1, %eax
movl %eax, -166(%ebp)
movl -8(%ebp), %eax
movl %eax, -182(%ebp)
movl -8(%ebp), %eax
addl $1, %eax
movl %eax, -8(%ebp)
movl -8(%ebp), %eax
cmpl -12(%ebp), %eax
jl  .LBNO6
jmp  .LBNO7
.LBNO6:
movl $1, -186(%ebp)
jmp  .LBNO3
.LBNO7:
movl $0, -186(%ebp)
jmp  .LBNO8
jmp  .LBNO8
.LBNO8:
movl $STR8, -190(%ebp)
movl -190(%ebp), %eax
pushl %eax
call prints
movl %eax, -194(%ebp)
movl -166(%ebp), %eax
pushl %eax
call printi
movl $STR9, -198(%ebp)
movl -198(%ebp), %eax
pushl %eax
call prints
movl %eax, -202(%ebp)
jmp  .LBNO5
.LBNO4:
movl -166(%ebp), %eax
movl %eax, -206(%ebp)
movl -166(%ebp), %eax
addl $1, %eax
movl %eax, -166(%ebp)
movl -12(%ebp), %eax
movl %eax, -210(%ebp)
movl -12(%ebp), %eax
addl $1, %eax
movl %eax, -12(%ebp)
movl -8(%ebp), %eax
cmpl -12(%ebp), %eax
jg  .LBNO9
jmp  .LBNO10
.LBNO9:
movl $1, -214(%ebp)
jmp  .LBNO4
.LBNO10:
movl $0, -214(%ebp)
jmp  .LBNO11
jmp  .LBNO11
.LBNO11:
movl $STR10, -218(%ebp)
movl -218(%ebp), %eax
pushl %eax
call prints
movl %eax, -222(%ebp)
movl -166(%ebp), %eax
pushl %eax
call printi
movl $STR11, -226(%ebp)
movl -226(%ebp), %eax
pushl %eax
call prints
movl %eax, -230(%ebp)
jmp  .LBNO5
.LBNO5:
movl $STR12, -234(%ebp)
movl -234(%ebp), %eax
pushl %eax
call prints
movl %eax, -238(%ebp)
movl $STR13, -242(%ebp)
movl -242(%ebp), %eax
pushl %eax
call prints
movl %eax, -246(%ebp)
movl -91(%ebp), %eax
movzbl (%eax), %eax
movb %al, -247(%ebp)
movl -95(%ebp), %eax
movzbl (%eax), %eax
movb %al, -248(%ebp)
movzbl -247(%ebp), %eax
cmpb -248(%ebp), %al
jl  .LBNO12
jmp  .LBNO13
.LBNO12:
movl $1, -252(%ebp)
jmp  .LBNO14
.LBNO13:
movl $0, -252(%ebp)
jmp  .LBNO15
jmp  .LBNO16
.LBNO14:
movl $STR14, -256(%ebp)
movl -256(%ebp), %eax
pushl %eax
call prints
movl %eax, -260(%ebp)
jmp  .LBNO16
.LBNO15:
movl -91(%ebp), %eax
movzbl (%eax), %eax
movb %al, -261(%ebp)
movl -87(%ebp), %eax
movzbl (%eax), %eax
movb %al, -262(%ebp)
movzbl -261(%ebp), %eax
cmpb -262(%ebp), %al
jg  .LBNO17
jmp  .LBNO18
.LBNO17:
movl $1, -266(%ebp)
jmp  .LBNO19
.LBNO18:
movl $0, -266(%ebp)
jmp  .LBNO20
jmp  .LBNO21
.LBNO19:
movl $STR15, -270(%ebp)
movl -270(%ebp), %eax
pushl %eax
call prints
movl %eax, -274(%ebp)
jmp  .LBNO16
.LBNO20:
movl $STR16, -278(%ebp)
movl -278(%ebp), %eax
pushl %eax
call prints
movl %eax, -282(%ebp)
jmp  .LBNO16
.LBNO21:
jmp  .LBNO16
.LBNO16:
movl $STR17, -286(%ebp)
movl -286(%ebp), %eax
pushl %eax
call prints
movl %eax, -290(%ebp)
movl $5, -299(%ebp)
movl $0, -303(%ebp)
movl -303(%ebp), %eax
imull $1, %eax
movl %eax, -307(%ebp)
movb $121, -308(%ebp)
leal -295(%ebp), %edx
movl -307(%ebp), %eax
addl %eax, %edx
movzbl -308(%ebp), %eax
movb %al, (%edx)
movl $1, -312(%ebp)
movl -312(%ebp), %eax
imull $1, %eax
movl %eax, -316(%ebp)
movb $111, -317(%ebp)
leal -295(%ebp), %edx
movl -316(%ebp), %eax
addl %eax, %edx
movzbl -317(%ebp), %eax
movb %al, (%edx)
movl $2, -321(%ebp)
movl -321(%ebp), %eax
imull $1, %eax
movl %eax, -325(%ebp)
movb $117, -326(%ebp)
leal -295(%ebp), %edx
movl -325(%ebp), %eax
addl %eax, %edx
movzbl -326(%ebp), %eax
movb %al, (%edx)
movl $3, -330(%ebp)
movl -330(%ebp), %eax
imull $1, %eax
movl %eax, -334(%ebp)
movb $114, -335(%ebp)
leal -295(%ebp), %edx
movl -334(%ebp), %eax
addl %eax, %edx
movzbl -335(%ebp), %eax
movb %al, (%edx)
movl $4, -339(%ebp)
movl -339(%ebp), %eax
imull $1, %eax
movl %eax, -343(%ebp)
movb $92, -344(%ebp)
leal -295(%ebp), %edx
movl -343(%ebp), %eax
addl %eax, %edx
movzbl -344(%ebp), %eax
movb %al, (%edx)
movl $0, -348(%ebp)
movl -348(%ebp), %eax
movl %eax, -166(%ebp)
.LBNO26:
movl $5, -352(%ebp)
movl -166(%ebp), %eax
cmpl -352(%ebp), %eax
jl  .LBNO22
jmp  .LBNO23
.LBNO22:
movl $1, -356(%ebp)
jmp  .LBNO24
.LBNO23:
movl $0, -356(%ebp)
jmp  .LBNO25
jmp  .LBNO25
.LBNO27:
movl -166(%ebp), %eax
movl %eax, -360(%ebp)
movl -166(%ebp), %eax
addl $1, %eax
movl %eax, -166(%ebp)
jmp  .LBNO26
.LBNO24:
movl -166(%ebp), %eax
imull $1, %eax
movl %eax, -364(%ebp)
leal -295(%ebp), %edx
movl -364(%ebp), %eax
addl %edx, %eax
movzbl (%eax), %eax
movb %al, -365(%ebp)
leal -365(%ebp), %eax
movl %eax, -369(%ebp)
movl -369(%ebp), %eax
pushl %eax
call prints
movl %eax, -373(%ebp)
movl $STR18, -377(%ebp)
movl -377(%ebp), %eax
pushl %eax
call prints
movl %eax, -381(%ebp)
jmp  .LBNO27
.LBNO25:
movl $0, -385(%ebp)
movl -385(%ebp), %eax
movl %ebp,%esp
popl %ebp
ret
