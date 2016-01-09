#define BUFF 500  //we can change this variable

int printString(char *c){ // prints the string

char buff[BUFF];
int i=0,bytes;
while(c[i]!='\0')
{
	buff[i]=c[i];
	i++;
}
bytes = i;

__asm__ __volatile__ (

"movl $4, %%eax \n\t"

"movl $1, %%ebx \n\t"

"int $128 \n\t"

:

:"c"(buff), "d"(bytes)

) ; // $4: write, $1: on stdin
return i;
}
