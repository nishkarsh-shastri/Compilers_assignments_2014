.data
 STR1:
.string "Enter the total number of integers to sort :"
STR2:
.string "Enter the number one by one:\n"
STR3:
.string "Sorting the array. \n"
STR4:
.string "Printing the sorted array. \n"
STR5:
.string " "
STR6:
.string "\n"

.text
 .globl main
 .type main, @function
main:
pushl	%ebp
movl 	%esp,%ebp
subl	$632,%esp
movl $100, -408(%ebp)
movl $STR1, -428(%ebp)
movl -428(%ebp), %eax
pushl %eax
call prints
movl %eax, -432(%ebp)
leal -424(%ebp), %eax
movl %eax, -436(%ebp)
movl -436(%ebp), %eax
pushl %eax
call readi
movl %eax, -440(%ebp)
movl -440(%ebp), %eax
movl %eax, -420(%ebp)
movl $STR2, -444(%ebp)
movl -444(%ebp), %eax
pushl %eax
call prints
movl %eax, -448(%ebp)
movl $0, -452(%ebp)
movl -452(%ebp), %eax
movl %eax, -412(%ebp)
.LBNO5:
movl -412(%ebp), %eax
cmpl -420(%ebp), %eax
jl  .LBNO1
jmp  .LBNO2
.LBNO1:
movl $1, -456(%ebp)
jmp  .LBNO3
.LBNO2:
movl $0, -456(%ebp)
jmp  .LBNO4
jmp  .LBNO4
.LBNO6:
movl -412(%ebp), %eax
movl %eax, -460(%ebp)
movl -412(%ebp), %eax
addl $1, %eax
movl %eax, -412(%ebp)
jmp  .LBNO5
.LBNO3:
movl -412(%ebp), %eax
imull $4, %eax
movl %eax, -464(%ebp)
leal -424(%ebp), %eax
movl %eax, -468(%ebp)
movl -468(%ebp), %eax
pushl %eax
call readi
movl %eax, -472(%ebp)
movl -472(%ebp), %edx
movl -464(%ebp), %eax
movl %edx, -404(%ebp,%eax,1)
jmp  .LBNO6
.LBNO4:
movl $STR3, -476(%ebp)
movl -476(%ebp), %eax
pushl %eax
call prints
movl %eax, -480(%ebp)
movl -420(%ebp), %eax
movl %eax, -412(%ebp)
.LBNO11:
movl $0, -488(%ebp)
movl -412(%ebp), %eax
cmpl -488(%ebp), %eax
jg  .LBNO7
jmp  .LBNO8
.LBNO7:
movl $1, -492(%ebp)
jmp  .LBNO9
.LBNO8:
movl $0, -492(%ebp)
jmp  .LBNO10
jmp  .LBNO10
.LBNO15:
movl -412(%ebp), %eax
movl %eax, -496(%ebp)
movl -412(%ebp), %eax
subl $1, %eax
movl %eax, -412(%ebp)
jmp  .LBNO11
.LBNO9:
movl $0, -500(%ebp)
movl -500(%ebp), %eax
movl %eax, -416(%ebp)
.LBNO17:
movl $1, -504(%ebp)
movl -412(%ebp), %eax
movl -504(%ebp), %edx
subl %edx, %eax
movl %eax, -508(%ebp)
movl -416(%ebp), %eax
cmpl -508(%ebp), %eax
jl  .LBNO12
jmp  .LBNO13
.LBNO12:
movl $1, -512(%ebp)
jmp  .LBNO14
.LBNO13:
movl $0, -512(%ebp)
jmp  .LBNO15
jmp  .LBNO16
.LBNO21:
movl -416(%ebp), %eax
movl %eax, -516(%ebp)
movl -416(%ebp), %eax
addl $1, %eax
movl %eax, -416(%ebp)
jmp  .LBNO17
.LBNO14:
movl $1, -520(%ebp)
movl -416(%ebp), %eax
movl -520(%ebp), %edx
addl %edx, %eax
movl %eax, -524(%ebp)
movl -524(%ebp), %eax
imull $4, %eax
movl %eax, -528(%ebp)
movl -528(%ebp), %eax
movl -404(%ebp,%eax,1), %eax
movl %eax, -532(%ebp)
movl -416(%ebp), %eax
imull $4, %eax
movl %eax, -536(%ebp)
movl -536(%ebp), %eax
movl -404(%ebp,%eax,1), %eax
movl %eax, -540(%ebp)
movl -532(%ebp), %eax
cmpl -540(%ebp), %eax
jl  .LBNO18
jmp  .LBNO19
.LBNO18:
movl $1, -544(%ebp)
jmp  .LBNO20
.LBNO19:
movl $0, -544(%ebp)
jmp  .LBNO21
jmp  .LBNO22
.LBNO20:
movl -416(%ebp), %eax
imull $4, %eax
movl %eax, -548(%ebp)
movl -548(%ebp), %eax
movl -404(%ebp,%eax,1), %eax
movl %eax, -552(%ebp)
movl -552(%ebp), %eax
movl %eax, -484(%ebp)
movl -416(%ebp), %eax
imull $4, %eax
movl %eax, -556(%ebp)
movl $1, -560(%ebp)
movl -416(%ebp), %eax
movl -560(%ebp), %edx
addl %edx, %eax
movl %eax, -564(%ebp)
movl -564(%ebp), %eax
imull $4, %eax
movl %eax, -568(%ebp)
movl -568(%ebp), %eax
movl -404(%ebp,%eax,1), %eax
movl %eax, -572(%ebp)
movl -572(%ebp), %edx
movl -556(%ebp), %eax
movl %edx, -404(%ebp,%eax,1)
movl $1, -576(%ebp)
movl -416(%ebp), %eax
movl -576(%ebp), %edx
addl %edx, %eax
movl %eax, -580(%ebp)
movl -580(%ebp), %eax
imull $4, %eax
movl %eax, -584(%ebp)
movl -484(%ebp), %edx
movl -584(%ebp), %eax
movl %edx, -404(%ebp,%eax,1)
jmp  .LBNO21
.LBNO22:
jmp  .LBNO21
.LBNO16:
jmp  .LBNO15
.LBNO10:
movl $STR4, -588(%ebp)
movl -588(%ebp), %eax
pushl %eax
call prints
movl %eax, -592(%ebp)
movl $0, -596(%ebp)
movl -596(%ebp), %eax
movl %eax, -412(%ebp)
.LBNO27:
movl -412(%ebp), %eax
cmpl -420(%ebp), %eax
jl  .LBNO23
jmp  .LBNO24
.LBNO23:
movl $1, -600(%ebp)
jmp  .LBNO25
.LBNO24:
movl $0, -600(%ebp)
jmp  .LBNO26
jmp  .LBNO26
.LBNO28:
movl -412(%ebp), %eax
movl %eax, -604(%ebp)
movl -412(%ebp), %eax
addl $1, %eax
movl %eax, -412(%ebp)
jmp  .LBNO27
.LBNO25:
movl -412(%ebp), %eax
imull $4, %eax
movl %eax, -608(%ebp)
movl -608(%ebp), %eax
movl -404(%ebp,%eax,1), %eax
movl %eax, -612(%ebp)
movl -612(%ebp), %eax
pushl %eax
call printi
movl $STR5, -616(%ebp)
movl -616(%ebp), %eax
pushl %eax
call prints
movl %eax, -620(%ebp)
jmp  .LBNO28
.LBNO26:
movl $STR6, -624(%ebp)
movl -624(%ebp), %eax
pushl %eax
call prints
movl %eax, -628(%ebp)
movl $0, -632(%ebp)
movl -632(%ebp), %eax
movl %ebp,%esp
popl %ebp
ret
