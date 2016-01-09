///Functions and functions

//The power of recursion
//This program will find the factorial of a numeber within reasonable limits
//Say n<20
//It will also find the fibonacci number for the given number using recursion

int factorial(int n)
{
	int t;
	if(n==1||n==0)
	{
		t = 1;
	}
	else
	{
		
		t = n*factorial(n-1);
	}
	return t;
}

int fibonacci(int n)
{
	int t;
	int p,q;
	if(n==1)
	{
		t = 1;
	}
	else if(n==0)
	{
		t = 0;
	}
	else
	{		
		p = fibonacci(n-1);
		q = fibonacci(n-2);
		t = p+q;
	}
	return t;

}

int main()
{
	prints("Enter a number whose factorial you want to know: ")	;
	int n,err;
	n = readi(&err);
	int fact;
	fact = factorial(n);
	prints("The value is: ");
	printi(fact);
	prints("\n");

	prints("Enter a number n whose fibonacci(n) you want to know: ");
	n = readi(&err);
	int fib;
	prints("The value is: ");
	fib = fibonacci(n);
	printi(fib);
	prints("\n");
	return 0;

}