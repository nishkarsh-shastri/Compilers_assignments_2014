#define BUFF 20
#define precision 6

int printFloat(float n){ // printFloat.c

	char buff[BUFF], zero='0';

	int i=0;

	if(n<0)
	{
		buff[i++]='-';
		n = -n;
	}
	int dig;

	int integral = (int)n;

	//Grab the integral part of the number
	if(integral==0)
	{
		buff[i++]=zero;
	}
	while(integral>0)
	{
		dig = integral%10;
		buff[i++]=(char)(zero+dig);
		integral/=10;
	}
	int k = i-1;
	int j;
	if(buff[0]=='-')
	{
		j=1;
	}
	else j = 0;
	char temp;
	while(j<k)
	{
		temp = buff[k];
		buff[k]=buff[j];
		buff[j]=temp;
		k--;
		j++;
	}

	//decimal part
	buff[i++]='.';

	float decimal = n -(float) ((int)n);

	decimal*=10;
	for(j = 0;j<precision;j++)
	{
		buff[i++]=(char)((int)decimal+zero);
		decimal-=(int)decimal;
		decimal*=10;
	}
	int bytes = i;


	__asm__ __volatile__ (
		"movl $4, %%eax \n\t"
		"movl $1, %%ebx \n\t"
		"int $128 \n\t"
		:
		:"c"(buff), "d"(bytes)
	) ; // $4: write, $1: on stdin
	return i;
}
