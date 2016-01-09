int main()
{
	int a;
	double x,y=9.0;
	x = 1.0;
	int z = 10;
	int b=10;
	char check;
	a = x*y+b;
	check = 'c';
	if(a<b)
	{
		if(b<x)
		{
			a = a+b;
		}
		else
		{
			a = --a;
		}
	}
	else
	{
		b = ++a;
	}
	if(x<y && (y>=z || a))
	{
		b++;
	}
	else
	{
		b--;
	}
}