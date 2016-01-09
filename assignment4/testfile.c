/* Hello */

///YOu suck
inline void checkchar()
{
	char temp;
	if(yylval[1]=='\\')
	{
		temp = yylval[2];
		switch(temp)
		{
			case '\'': yylval.cval = '\''; break;
			case '\"': yylval.cval = '\"'; break;
			case '\?': yylval.cval = '\?'; break;
			case '\\': yylval.cval = '\\'; break;
			case 'a':  yylval.cval = '\a'; break;
			case 'b':  yylval.cval = '\b'; break;
			case 'f':  yylval.cval = '\f'; break;
			case 'n':  yylval.cval = '\n'; break;
			case 'r':  yylval.cval = '\r'; break;
			case 't':  yylval.cval = '\t'; break;
			case 'v':  yylval.cval = '\v'; break;
			default : break;
		}
	}
	else
	{
		yylval.cval=yytext[1];
	}
}

int main()
{

	auto int cliff;
	unsigned int cartoon;
	char x = '0';
	
	short int b=4;
	int a[5] = {1,2,3,4,5};
	int n = sizeof(a)/sizeof(a[1]);
	a[1] = 1;
	restrict int sum = a+b;
	float x = 12.32432;
	float y =23.4239;
	float mult = x*y;
	float div = x/y;
	float mod = a%b;
	y+=sum;
	x+=mult;
	div+=x/y;
	div%=x;

	int diff = x-y;
	diff-=a;

	char *c = "ONE TWO THREE\n";
	int i;
	for(x=1;x<10;x++)
	{
		int i = 12;
		if(i==1)
			continue;
		else
		{
			while(i<10)
			{
				unsigned int y;
				break;
			}
		}
	}

	a++;
	b--;
	int g = (a!=3)?a:b;

	a<<1;
	b>>1;
	N->next = NULL;
	N->data = 56;
}
