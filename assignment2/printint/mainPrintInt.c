#include <stdio.h>
#include "printInt.h"
int main()
{
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);
	int x=printInt(n);
	printInt(x); // Prints the number of characters printed in the integer
	return 0;
}
