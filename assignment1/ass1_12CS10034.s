	
######## Assignment 1 - compilers.
######## Annotating assembly language
######## Nishkarsh shastri - 12CS10034

## Convention M[x] represents the value of the address field in the memory at x


	.file	"ass1_12CS10034.c"		#the name of the main c code
	.section	.rodata				# read-only data section
	.align 4						# align with 4-byte boundary
.LC0:								# label of string - 1st printf
	.string	"Enter the order of the square matrix: " 
.LC1:								# label of string - scanf command
	.string	"%d"
	.align 4 						# align with 4-byte boundary
.LC2:								# label of string - 3rd printf
	.string	"Enter the matrix in row-major order:"
.LC3:								# label of string - 4th printf
	.string	"The input matrix is:"
.LC4:								# label of string - scanf command
	.string	"%d "
.LC5:								# label of string 
	.string	"In cs order:"
	.text							# code starts
	.globl	main					# main is the global name
	.type	main, @function
main:								# label main : 
.LFB0:								
	.cfi_startproc
	pushl	%ebp					# save old base pointer
	.cfi_def_cfa_offset 8            
	.cfi_offset 5, -8
	movl	%esp, %ebp				# ebp <-- esp , set new base pointer
	.cfi_def_cfa_register 5	
	andl	$-16, %esp				# set the 16 byte boundary
	subl	$1632, %esp				# allocate the space. for 20*20 matrix, 
									# 1600 bytes will be stored 
									# plus extra space for index storage
	movl	$.LC0, (%esp)			# push the first parameter
	call	printf					# call puts() to print the string with label LC0
	leal	20(%esp), %eax			# eax <-- M[20+esp], it will store the value of n
	movl	%eax, 4(%esp)			# M[esp + 4] <-- eax (4 byte space for the input)
	movl	$.LC1, (%esp)			# push the second parameter
	call	__isoc99_scanf			# call for scanf to read the value of n
	movl	$.LC2, (%esp)			# move .LC2 string in the stack
	call	puts					# print the .LC2 string
	movl	$0, 24(%esp)			# M[24 + esp] <-- 0, i.e. i = 0
									# i is pushed on the stack
	jmp	.L2 						# go to label L2
.L5:
	movl	$0, 28(%esp)			# M[28+esp] <-- 0, push the next parameter j into the stack
									# initialize j = 0
	jmp	.L3 						# jump to label L3
.L4:
	leal	32(%esp), %ecx			# ecx <-- M[32+esp], a temporary register for storage
	movl	24(%esp), %edx      	# edx <-- M[24+esp], implies edx <-- i
	movl	%edx, %eax 				# eax <-- edx,  implies  eax <--i
	sall	$2, %eax 				# left shift eax by two bits, i.e. eax <-- 4*eax, i = 4*i
	addl	%edx, %eax 				# eax <-- eax + edx, i.e. 4*i+i
									# eax <-- 5*i
	sall	$2, %eax 				# eax <-- 4*(eax), i.e. eax <-- 20*i
	movl	28(%esp), %edx         	# edx <-- M[esp + 28], it means edx <--j
	addl	%edx, %eax 				# eax <-- eax + edx, i.e. eax = 20*i +j 
	sall	$2, %eax                # eax <-- 4*eax, i.e. eax = 80*i + 4j (left shift by two bits)
									# now eax contains the address of the next position data[i][j]
									# whose input has to be taken with 4 bytes allocated space for each entry
	addl	%ecx, %eax 				# eax <-- eax + ecx, push the next variable on the stack
	movl	%eax, 4(%esp) 			# M[esp + 4] <-- eax, create a 4 byte boundary
	movl	$.LC1, (%esp)           # the string .LC0 containing "%d" is pushed
	call	__isoc99_scanf          # get the input M[i][j]
	addl	$1, 28(%esp) 			# increment j, i.e. j++
.L3:
	movl	20(%esp), %eax			# eax <-- M[20+esp],the value of n is restored in eax
	cmpl	%eax, 28(%esp)          # compare the value of n with j
	jl	.L4      					# if j<n, then jump to .L4
	addl	$1, 24(%esp) 			# else incerement i by 1, i++
.L2:
	movl	20(%esp), %eax			# eax <-- M[20+esp] (get the value of n)	
	cmpl	%eax, 24(%esp)			# compare the value of i at M[24+esp] to that of n
	jl	.L5 						# if i<n the jump to .L5 else continue
	movl	$.LC3, (%esp)			# push the string .LC3 into the stack
									# call the puts() to print the string
	call	puts					# it will print "The input matrix is\n"
	movl	$0, 24(%esp) 			# M[24+esp] <-- 0, the value of i is initialized to 0  
	jmp	.L6 						# jump to label .L6
.L9:
	movl	$0, 28(%esp) 			# M[28 + esp] <-- 0 , i.e. j<--0
	jmp	.L7                         # jump to label .L7
.L8:
	movl	24(%esp), %edx 		 	# edx <-- M[24+esp], edx <--i	
	movl	%edx, %eax 				# eax <-- edx,  implies  eax <--i
	sall	$2, %eax				# left shift eax by two bits, i.e. eax <-- 4*eax, i = 4*i (left shift by 2 bits)
	addl	%edx, %eax				# eax <-- eax + edx, i.e. 4*i+i = 5i
	sall	$2, %eax 				# eax <-- 4*(eax), i.e. eax <-- 20*i (left shift by 2 bits)
	movl	28(%esp), %edx 			# edx <-- esp + 28, it means eds <--j
	addl	%edx, %eax				# eax <-- eax + edx, i.e. eax = 20*i +j 
	movl	32(%esp,%eax,4), %eax   # eax <-- M[4*eax + esp +32], i.e. eax = M[80*i + 4j + esp + 32] (left shift by two bits)
									# now eax contains the address of the next position data[i][j]
	movl	%eax, 4(%esp) 			# M[4 + esp] <-- eax (create a 4 byte boundary)
	movl	$.LC4, (%esp) 			# call the print string using the string label .LC4 pushed on the stack
	call	printf 					# print data[i][j]
	addl	$1, 28(%esp) 			# increment j, i.e. j++
.L7:
	movl	20(%esp), %eax			# eax <-- M[20+esp], i.e. eax <--n
	cmpl	%eax, 28(%esp)			# compare j and n
									# if j<n
	jl	.L8 						# jump to .L8 else continue
	movl	$10, (%esp)				# esp <-- 10, the newline character is pushed on to the stack
	call	putchar 				# put the newline character
	addl	$1, 24(%esp) 			# M[esp+24] <-- M[(esp+24)] + 1, i.e. i++ means i is incremented
.L6:
	movl	20(%esp), %eax  		# eax <-- M[20+esp], restore the value of n, eax <--n
	cmpl	%eax, 24(%esp) 			# compare the value of j to that of n
	jl	.L9                         # if j<9 then jump to label L9 else continue
	movl	$.LC5, (%esp) 			# push the string labelled .L5 to the stack
									# call puts to print that string
	call	puts 					# it will print the string "In cs order:\n"
	movl	20(%esp), %eax 			# eax <-- M[20+esp], i.e. eax <--n
	leal	32(%esp), %edx 			# edx <-- M[32+esp], push the next parameter
	movl	%edx, 4(%esp) 			# M[4+esp] <-- edx, create a 4 vyte space
	movl	%eax, (%esp)  			# M[esp] <-- eax, change the stack pointer to point to eax i.e. 20+esp
	call	cs                      # call the function cs whose two parameters are defined as given above
	movl	$0, %eax				# eax <--0,
	leave							# end main
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret 							# return %eax i.e. 0
	.cfi_endproc

# the functions are defined below
.LFE0:
	.size	main, .-main
	.section	.rodata				# only read only data
.LC6:
	.string	"%d\n"
	.text							# main part of the function
	.globl	cs 						# the function name
	.type	cs, @function

cs:                     			# starting of the function cs
.LFB1: 								# label .LFB1
	.cfi_startproc 
	pushl	%ebp 					# store the old base pointer
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp				# ebp <-- esp , set new base pointer
	.cfi_def_cfa_register 5
	subl	$24, %esp 				# esp <-- esp-24, allocate space for local variables
	# 4 byte space is reserved for eip and another 4 byte is for ebp
	cmpl	$0, 8(%ebp)				# 8+ebp currently points to n. 
									# compare the value of n with 0	
	jne	.L12						# if n!=0 jump to label .L12 else continue
	movl	$10, (%esp)				# M[esp] <--10. the syscall parameter for newline
	call	putchar 				# call putchar to print the newline character
	jmp	.L11 						# jump to label .L11
.L12:
	cmpl	$1, 8(%ebp) 			# compare n with 1
	jne	.L14						# if n!=1, then jump to .L14 label else continue
	movl	12(%ebp), %eax			# eax <-- M[12+ebp] i.e. in this case eax <-- adress of data[0][0]
	movl	(%eax), %eax			# eax <--(%eax), store the value of data[0][0] in eax
	movl	%eax, 4(%esp)			# M[esp+4] <-- eax, push data[0][0] at the esp+4 location to get printed
	movl	$.LC6, (%esp)			# call the printf command using the string format .LC6
	call	printf					# call printf to print data[0][0]
	jmp	.L11						# jump to label L11
.L14:
	movl	$0, 12(%esp)			# locally store 0 at position 12+esp, i.e. M[12+esp] <-- 0
	movl	$1, 8(%esp)				# locally store 1 at position 8+esp, i.e. M[8+esp] <-- 1
	movl	12(%ebp), %eax			# eax <-- M[12+ebp] i.e. eax contains the address of data array
	movl	%eax, 4(%esp)			# M[4 + esp] <-- address of data array
	movl	8(%ebp), %eax			# eax <-- M[8+ebp], i.e. eax<-n
	movl	%eax, (%esp)			# M[esp] <-- eax
									# all the parameters of po are pushed in reverse order
	call	po 						# call the function po
	movl	12(%ebp), %eax 			# eax <- M[12+ebp]
	addl	$80, %eax 				# eax <- eax + 80
	leal	4(%eax), %edx 			# edx <- eax + 4
	movl	8(%ebp), %eax			# eax <- M[ebp+8] i.e. eax <-n
	subl	$2, %eax				# eax <- eax-2, eax <- n-2
	movl	%edx, 4(%esp)			# M[esp+4] <- edx , push the second parameter on the stack
	movl	%eax, (%esp)			# M[esp] <- eax, push the first parameter on the stack
	call	cs 						# call the function cs
.L11:
	leave							# end the function
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret 							# return the value stored in eax
	.cfi_endproc
.LFE1:
	.size	cs, .-cs
	.globl	po 						# po is the global function
	.type	po, @function
po:									# starting of the function po
.LFB2:								
	.cfi_startproc
	pushl	%ebp					# push the old base pointer to the top
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp				# ebp <-- esp , set the new base pointer
	.cfi_def_cfa_register 5 
									# considering the 8 bytes space occupied by ebp and eip
	subl	$24, %esp 				# esp <- esp-24, allocate space for local variables
	movl	16(%ebp), %eax 			# eax <- M[16+ebp] i.e. eax <- type 
									# switch statements begin here
	cmpl	$2, %eax 				# compare eax with 2									
	je	.L17 						# if eax == 2 , jump to L17 else continue
	cmpl	$2, %eax 				# again compare eax with 2
	jg	.L18						# if eax>2 then jump to .L18
	cmpl	$1, %eax 				# compare eax with 1
	je	.L19						# if eax ==1 jump to .L19 else continue
	jmp	.L15 						# jump to .L15
.L18:
	cmpl	$3, %eax 				# compare eax i.e. n with 3
	je	.L20 						# if n == 3, jump to .L20 else continue
	cmpl	$4, %eax 				# compare n with 4
	je	.L21						# if n == 4, jump to .L21 else continue
	jmp	.L15						# exit the function via path of label .L15

	# if type == 1 then following label is executed
.L19:
	movl	8(%ebp), %eax          	# eax <- M[8+ebp], i.e. eax <- n
	subl	$1, %eax 				# eax <- eax-1, i.e. eax <- n-1
	cmpl	20(%ebp), %eax 			# compare eax i.e. n-1 with M[20+ebp] i.e. ind (argument 4)
	jne	.L22 						# if ind !=n-1, jump to .L22 else continue
	movl	$0, 12(%esp)			# M[12+esp] <- 0, fourth argument of next po call
	movl	$2, 8(%esp) 			# M[8+esp] <- 2, third argument of next po call
	movl	12(%ebp), %eax 			# eax <- M[12+ebp], i.e. base address of data array
	movl	%eax, 4(%esp) 			# M[4+esp] <- eax, second argumet of next po call
	movl	8(%ebp), %eax 			# eax <- M[8+bsp], i.e. eax <- n
	movl	%eax, (%esp)			# M[esp] <- eax, i.e. first argument of next po call
	call	po                      # call the po(n, data, 2, 0);
	jmp	.L15 						# exit the function via .L15 instruction path

	# else condition of the first switch statement i.e. case 1
.L22:
	movl	12(%ebp), %eax 			# eax <- M[ebp+12], i.e. base address of data array
	movl	20(%ebp), %edx   		# edx <- M[ebp+20], i.e. edx <- ind
	movl	(%eax,%edx,4), %eax  	# eax <- value of (eax + 4*edx), i.e. data + 4*ind which is data[0][ind]
	movl	%eax, 4(%esp)  			# push data[0][ind] on top of the stack to be printed out
	movl	$.LC4, (%esp) 			# push format string to be printed
	call	printf 					# call printf to print the data[0][ind]
	movl	20(%ebp), %eax 			# eax <- 20+ebp, i.e. eax <- ind
	addl	$1, %eax 				# eax <- eax+1, i.e. eax <- ind + 1
	movl	%eax, 12(%esp) 			# M[12+esp] <- eax, 4th argument for next po call ie ind+1
	movl	$1, 8(%esp) 			# M[8+esp] <- 1, 3rd argument for next po call
	movl	12(%ebp), %eax 			# eax <- M[12+ebp], i.e base address of data array
	movl	%eax, 4(%esp) 			# M[4+esp] <- eax, 2nd argument of next po call
	movl	8(%ebp), %eax 			# eax <- M[8+ebp],i.e. eax <-n
	movl	%eax, (%esp) 			# M[ebp] <- eax, i.e. 1st argument of next po call
	call	po 						# call po(n, data, 1, ind+1);
	jmp	.L15						# jump to .L15
.L17:
	movl	8(%ebp), %eax 			# eax <- M[8+ebp], i.e. eax <- n
	subl	$1, %eax 				# eax <- eax-1, i.e. eax <- n-1
	cmpl	20(%ebp), %eax 			# compare eax i.e. n-1 with M[20+ebp] i.e. ind (argument 4)
	jne	.L24 						# if n-1 != ind jump to .L24 else continue
	movl	8(%ebp), %eax 			# eax <- M[8+ebp] i.e. eax <- n
	subl	$1, %eax 				# eax <- eax -1 i.e. eax <- n-1
	movl	%eax, 12(%esp) 			# M[12+esp] <- eax, i.e. M[esp+12]=n-1, local variable (argument 4 for next po call) 
	movl	$3, 8(%esp) 			# M[esp+8] <- 3 (argument 3 for next po call)
	movl	12(%ebp), %eax 			# eax <- M[12+ebp], i.e. eax <- adress of array data
	movl	%eax, 4(%esp) 			# M[esp+4] <- eax, i.e. the 2nd argument for next po call
	movl	8(%ebp), %eax			# eax <- M[8+bsp], i.e. eax <- n
	movl	%eax, (%esp)           	# M[esp] <- eax, the first argument of next po call
	call	po 						# call the function po with arguments given in reverse order as declared above
	jmp	.L15  						# jump to .L15

.L24: 								# the else condition of second switch statement
	movl	20(%ebp), %edx 			# edx <-20+ebp,i.e. edx <- ind
	movl	%edx, %eax 				# eax <- edx i.e. eax <- ind
	sall	$2, %eax 				# eax <- eax*4 , eax <- 4*ind
	addl	%edx, %eax 				# eax <- eax + edx, eax <- 5*ind 
	sall	$4, %eax 				# eax <- 16*eax i.e. eax <- 80*ind
	movl	%eax, %edx				# edx <- eax, edx <- 80*ind
	movl	12(%ebp), %eax  		# eax <- M[12+ebp], eax is storing the address of data array
	addl	%edx, %eax 				# eax <- eax + edx, i.e edx <- data*80*ind (which is starting of row no. ind)
	movl	8(%ebp), %edx           # edx <- M[8+ebp], value of n
	subl	$1, %edx 				# edx <- edx - 1, i.e. edx <- n-1
	movl	(%eax,%edx,4), %eax 	# eax <- M[eax + edx*4] i.e. value of data[ind][n-1]
	movl	%eax, 4(%esp)     		# M[4+esp] <- eax, push the number to be printed
	movl	$.LC4, (%esp) 			# push the string format for integer to be printed
	call	printf 					# call the printf to print the number
	movl	20(%ebp), %eax 			# eax <- M[20+ebp],i.e. eax <- ind
	addl	$1, %eax 				# eax <- ind + 1
	movl	%eax, 12(%esp) 			# M[12+esp] <- eax, 4th argument of function po
	movl	$2, 8(%esp) 			# M[8+esp] <- 2, 3rd argument of po
	movl	12(%ebp), %eax 			# eax <- M[12+ebp], eax <- address of data array
	movl	%eax, 4(%esp) 			# M[12 + esp]= eax, store the address of data in 2nd argument of po
	movl	8(%ebp), %eax           # eax <- n
	movl	%eax, (%esp) 		
			# M[esp] <- n, the first argument of po function to be called
	call	po                      # call the po function
	jmp	.L15						# jump to .L15 to return 
.L20:
	cmpl	$0, 20(%ebp)            # compare M[ebp+20] i.e. ind with 0
	jne	.L26 						# if ind != 0 jump to .L26 else continue
	movl	8(%ebp), %eax 			# eax <- M[8+ebp], i.e. eax <- n
	subl	$1, %eax 				# eax <- eax-1, i.e. eax <- n-1
	movl	%eax, 12(%esp)			# M[12+esp] <- eax, i.e. M[esp+12]=n-1, local variable (argument 4 for next po call) 
	movl	$4, 8(%esp) 			# M[esp+8] <- 4, third argument for next po call
	movl	12(%ebp), %eax 			# eax <- M[12+ebp], i.e. eax <- base address of array data
	movl	%eax, 4(%esp) 			# M[esp+4] <- eax, i.e. the 2nd argument for next po call
	movl	8(%ebp), %eax 			# eax <- M[8+bsp], i.e. eax <- n 
	movl	%eax, (%esp) 			# M[esp] <- eax, the first argument of next po call
	call	po 						# call the po function
	jmp	.L15						# jump to the end

	# else condition of third switch statement
.L26:
	movl	8(%ebp), %edx 			# edx <- M[8+bsp], i.e edx <- n
	movl	%edx, %eax 				# eax <- edx
	sall	$2, %eax                # eax <- 4*eax, i.e. eax <- 4n
	addl	%edx, %eax              # eax <- eax + edx i.e. eax = 5n
	sall	$4, %eax                # eax <- 16*eax i.e. eax <- 80n
	leal	-80(%eax), %edx 		# edx <- eax - 80 i.e. 80(n-1)
	movl	12(%ebp), %eax 			# eax <- base address of data array
	addl	%eax, %edx 			 	# edx <- eax + edx i.e, edx <- base address of row n-1 of 2d data array
	movl	20(%ebp), %eax 			# eax <- M[20+ebp], i.e eax <- ind
	movl	(%edx,%eax,4), %eax 	# eax <- edx + eax*4 i.e. eax <- value of data[n-1][ind]
	movl	%eax, 4(%esp) 			# M[4+esp] <- eax, the number to be printed
	movl	$.LC4, (%esp)			# print format
	call	printf 					# call the printf
	movl	20(%ebp), %eax  		# eax <- M[20+ebp],i.e. eax <- ind 
	subl	$1, %eax 				# eax <- eax -1, eax <- ind-1
	movl	%eax, 12(%esp) 			# M[12+esp] <- eax , 4th argument of next po call
	movl	$3, 8(%esp) 			# M[8+esp] <- 3, 3rd argument of next po call
	movl	12(%ebp), %eax  		# eax <- M[12+esp], the base address of data array
	movl	%eax, 4(%esp) 			# M[4+esp] <- eax, the 2nd argument
	movl	8(%ebp), %eax			# eax <- M[8+bsp], eax <- n
	movl	%eax, (%esp) 			# M[esp] <- eax, the 1st argument of next po call
	call	po 						# po call po(n, data, 3, ind-1);
	jmp	.L15 						# go to the function exit
.L21:
	cmpl	$0, 20(%ebp)       		# compare M[20+bsp] i.e. ind with 0
	jne	.L28 						# if ind!=0, jump to .L28 else continue
	jmp	.L15  						# jump to the end
.L28: 								# else condition of fourth switch statement
	movl	20(%ebp), %edx 			# edx <-20+ebp,i.e. edx <- ind
	movl	%edx, %eax 				# eax <- edx i.e. eax <- ind
	sall	$2, %eax 			    # eax <- eax*4 , eax <- 4*ind
	addl	%edx, %eax 				# eax <- eax + edx, eax <- 5*ind 
	sall	$4, %eax 				# eax <- 16*eax i.e. eax <- 80*ind
	movl	%eax, %edx				# edx <- eax, edx <- 80*ind
	movl	12(%ebp), %eax 			# eax <- M[12+ebp], eax is storing the address of data array
	addl	%edx, %eax 				# eax <- eax + edx, i.e edx <- data*80*ind (which is starting of row no. ind)
	movl	(%eax), %eax 			# eax <- value of data[ind][0]
	movl	%eax, 4(%esp) 			# push eax to the stack so that it can be printed
	movl	$.LC4, (%esp) 			# push the format string into the stack
	call	printf  				# call printf
	movl	20(%ebp), %eax 			# eax <- M[20+ebp] , i.e. eax <- ind
	subl	$1, %eax 				# eax <- eax - 1 i.e. eax <- ind -1
	movl	%eax, 12(%esp)			# M[esp + 12] <- eax , 4th argument of next po call
	movl	$4, 8(%esp) 			# M[esp + 8] <- 4 , 3rd argument of next po call
	movl	12(%ebp), %eax 			# eax <- M[ebp+12], base address of data array
	movl	%eax, 4(%esp) 			# M[esp + 4] <- eax, i.e. 2nd argument of next po call
	movl	8(%ebp), %eax 			# eax <- M[8+bsp],i.e. eax <- n
	movl	%eax, (%esp)			# M[esp] <- n, first argument of next po call
	call	po 						# call po(n, data, 4, ind-1);
	nop 							# end of function
.L15:
	leave							# end the po function
	.cfi_restore 5
	.cfi_def_cfa 4, 4
	ret 							# return the value stored in eax
	.cfi_endproc
.LFE2:
	.size	po, .-po
	.ident	"GCC: (Ubuntu 4.8.2-19ubuntu1) 4.8.2"
	.section	.note.GNU-stack,"",@progbits
