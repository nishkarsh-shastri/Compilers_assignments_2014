#include <stdio.h>
#include "printFloat.h"

int main()
{
	float n;
	printf("Enter a floating point number: ");
	scanf("%f", &n);
	int x=printFloat(n);
	printf("\n");
	return 0;
}
