//  The pointer testing
//In this program, we will play with integer and character pointers
//We will also do conditional checking to check whether the pointers are working or not

//Along with that an example of character array is also given
//The reason character array is generally avoided is because we have very poor means of printing it.
//The function prints takes NULL terminated string which sadly character pointer doesn't have and hence we see the garbage values
int main()
{
	int a,b,c,err;
	prints("Enter the first number: ");
	a = readi(&err);
	prints("Enter the second number: ");
	b = readi(&err);
	prints("Enter the third number: ");
	c = readi(&err);

	int *x,*y,*z;
	char p,q,r;
	char *m,*n,*o;
	p = 'a';
	q = 'b';
	r = 'd';
	m = &p;
	n = &q;
	o = &r;

	x = &a;
	y = &b;
	z = &c;
	
	*x = *y;
	prints("The first number address was pointed to second one: ");
	printi(a);
	prints("\n");

	*y  = *z;
	prints("The second number address was pointed to third one: ");
	printi(b);
	prints("\n");
	int i = 0;

	if(a<b)
	{
		do
		{
			i++;
			a++;
		}while(a<b);
		prints("After pointer arrangements second was greater than first by :");
		printi(i);
		prints("\n");
	}
	else
	{	
		do
		{
			i++;
			b++;
		}while(a>b);
		prints("After pointer arrangements second was less than first by :");
		printi(i);
		prints("\n");
	}

	
	prints("Character comparison");
	prints("\n");
	if(*n<*o)
	{
		prints("q was less\n");
	}
	else
	{
		if(*n>*m)
		{
			prints("q was best\n");
		}
		else
		{
			prints("p was best\n");
		}
	}

	prints("A character array handling. Ignore the garbage due to lack of terminal null char\n");
	char car[5];
	car[0] = 'y';
	car[1] = 'o';
	car[2] = 'u';
	car[3] = 'r';
	car[4] = '\n';
	int i;
	for(i=0;i<5;i++)
	{
		prints(&car[i]);
		prints("\n");	
	}
	
	return 0;
}