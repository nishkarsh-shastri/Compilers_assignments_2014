#include "myl.h"

//A test file to test the library functions written
int main()
{
	int n,err=0;
	prints("Write the integer n:");
	n = readi(&err);
	if(err!=ERR)
	{
		prints("The integer read is : ");
		printi(n);
	}
	else
	{
		prints("Wrong Input\n");
	}
	float x;

	prints("\nEnter the decimal number: ");
	err = readf(&x);
	if(err==OK)
	{
		prints("The floating number is :");
		printd(x);
	}
	else
	{
		prints("Wrong Input\n");
	}
	prints("\n");
	return 0;
}
