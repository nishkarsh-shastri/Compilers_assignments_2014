//A testfile for bubble sorting
//It will ask the users to enter a number less than 100
//Then it will read those numbers from the user.
//It will sort them using bubble sort.
//In the end it will print the sorted array of integers

int main()
{
	int a[100];
	int i;
	int j;
	int n;
	int err;
	prints("Enter the total number of integers to sort :");
	n = readi(&err);
	prints("Enter the number one by one:\n");
	for(i=0;i<n;i++)
	{
		a[i] = readi(&err);
	}

	prints("Sorting the array. \n");
	int temp;
	for(i=n;i>0;i--)
	{
		for(j=0;j<i-1;j++)
		{
			if(a[j+1]<a[j])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1]=temp;
			}
		}
	}
	prints("Printing the sorted array. \n");
	for(i=0;i<n;i++)
	{
		printi(a[i]);
		prints(" ");
	}
	prints("\n");

	return 0;


}