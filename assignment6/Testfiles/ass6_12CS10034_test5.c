///MAX of 3 numbers

//This program will ask the user to enter three numbers
//It will invoke a function which will return the maximum of them
//It will be a good example of condition checking.

int findmax(int a,int b,int c)
{
	int max = a;
	if(b>a)
	{
		if(b>c)			
		max = b;
		else
			max = c;
	}
	else if(c>a)
	{
		max = c;
	}

	return max;

}


int main()
{
	prints("Enter three numbers whose maximum among them you want to know\n");
	int a,b,c,err;
	prints("Enter the first number: ");
	a = readi(&err);
	prints("Enter the second number: ");
	b = readi(&err);
	prints("Enter the third number: ");
	c = readi(&err);

	int max;
	max = findmax(a,b,c);

	prints("The max value is: ");
	printi(max);
	prints("\n");

	prints("Lets do expression tests:\n");
	prints("a = b*c*a = ");
	a = b*c*a;
	printi(a);
	prints("\n");

	prints("b = a/c = ");
	b = a/c;
	printi(b);
	prints("\n");
	
	prints("c = a%b = ");
	c = a%b;
	printi(c);
	prints("\n");
		
	return 0;
}
