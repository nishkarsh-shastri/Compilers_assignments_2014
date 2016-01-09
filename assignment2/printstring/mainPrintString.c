#include <stdio.h>
#include "printString.h"
#define max_n 1000

int main()
{
	char c[max_n];
	printf("Enter a string:\n");
	scanf("%s",c);
	int x=printString(c);
	printf("%d\n",x); // Prints the number of characters printed in the integer
	return 0;
}