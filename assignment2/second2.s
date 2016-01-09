# 1 "secondnew.S"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "secondnew.S"
# 1 "/usr/include/asm/unistd.h" 1 3 4







# 1 "/usr/include/asm/unistd_32.h" 1 3 4
# 9 "/usr/include/asm/unistd.h" 2 3 4
# 2 "secondnew.S" 2

# 1 "/usr/include/syscall.h" 1 3 4
# 1 "/usr/include/sys/syscall.h" 1 3 4
# 31 "/usr/include/sys/syscall.h" 3 4
# 1 "/usr/include/bits/syscall.h" 1 3 4
# 32 "/usr/include/sys/syscall.h" 2 3 4
# 1 "/usr/include/syscall.h" 2 3 4
# 4 "secondnew.S" 2



.file "second2.S"

.section .rodata

L1:

.string "My second program\n"

L2:

.text

.globl _start
_start:

movl $(4), %eax

movl $(1), %ebx

movl $L1, %ecx

movl $(L2-L1), %edx

int $128

movl $(1), %eax

movl $0, %ebx

int $128
