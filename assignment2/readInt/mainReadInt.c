#include <stdio.h>
#include "readInteger.h"

int main()
{
	int n;
	int e=0;
	printf("Enter an integer: ");
	n = readi(&e);
	if(e==0)
	{
		printf("%d\n",n);
	}
	else
	{
		printf("Wrong Input\n");
	}
}
