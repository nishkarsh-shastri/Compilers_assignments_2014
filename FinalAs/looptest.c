//this will check whether all the loops are working fine or not

int main()
{
	int i,j;
	int a[10];
	double x = 1.0;
	int y = 9;
	int constant = 100;
	double k;
	k = 9.0;

	for(i=1;i<constant;i++)
	{
		x = x+10;
		y = y-x;
	}

	while(y<1)
	{
		y = y + constant;
	}

	j = 1;
	do
	{
		i = i-1;
	}while(a[j]<k);

	if(i<j || y < 9)
	{
		x = x-y;
	}
	else
	{
		y = y-x;
	}
	if(x > y)
	{
		x = k;
	}

}