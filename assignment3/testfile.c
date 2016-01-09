#include<stdio.h>
#include<stdlib.h>
extern int yyl;
//This is the test file to be checked. It will contain all the tokens needed to be taken in assignment 3
/*This is the second type of comment ********************/
/* Care has been taken to check the boundary cases in case of comments*/

typedef int myInt;  //It will identify the keywords

struct node{
	node *next;
	int data;
}
int main()
{

	/* all the keywords are checked in the following syntax along with identifiers and constants*/
	/* Note that since the rules for recognizing enum is conflicting, hence it is not shown */
	auto int cliff;
	unsigned int cartoon;
	char x = '0';
	do
	{
		x = 'a';
	}while(x!=('a'));

	goto(x);

	double dVal = 329.29;
	char place = 'f';
	static int a=20;
	short int b=4;
	int a[5] = {1,2,3,4,5};
	int n = sizeof(a)/sizeof(a[1]);
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
	const char* = "ONE TWO THREE\n"
	int i;
	for(i=0;i<1200;i++)
	{
		if(i==0)
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
	union
	{
		a,b;
	}

	a++;
	b--;
	int g = (a!=3)?a:b;
	a<<1;
	b>>1;

	_Bool bval;
	_Complex cpVal;
	_Imaginary imVal;

	struct node * N;
	N = (int*)malloc(sizeof(int));
	N->next = NULL;
	N->data = 56;
	//major puctuators used are being shown in the testfile.

}



//Checking whether all the characters are read or not
//This will specially check for the escape characters.

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

