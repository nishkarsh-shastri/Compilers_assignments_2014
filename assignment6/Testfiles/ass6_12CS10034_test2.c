//A testfile for checking integer swapping
//It will ask the users to enter two numbers and swap them accordingly
//It would be a good test file to check whether pass by reference is working or not

void swap(int *a,int *b);

int main()
{
	int a;
	int b;
	int err;

	prints("Enter the value of a:");
	a = readi(&err);

	prints("Enter the value of b:");
	b = readi(&err);
	
	swap(&a,&b);
	prints("Swapping the values of a and b by passing into a function as reference\n");
	prints("The value of a:");
	printi(a);
	prints("\n");

	prints("The value of b:");
	printi(b);
	prints("\n");


	return 0;
}

void swap(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
	return;
}
