//This function will call the function to print an integer


#include <stdio.h>
#include "printInt.h" //The locally defined library
int main()
{
	int n;
	printf("Enter an integer: ");
	scanf("%d", &n);//get the integer
	printInt(n); //function call to the library
	return 0;
}