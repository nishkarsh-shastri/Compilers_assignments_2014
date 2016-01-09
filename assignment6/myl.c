#include "myl.h"

#define iBUFF 20 				//buffer size for integers
#define sBUFF 1000				//buffer size for strings (Maximum string input)
#define fBUFF 20				//buffer size for decimals
#define precision 6 			//precision for floating point numbers

int printi(int n)		// function to print an integer
{ // printi.c
	char buff[iBUFF], zero='0'; //character array will store the integer digits
	int i=0, j, k, bytes;
	if(n == 0) buff[i++]=zero; 
	else //handling of negative integers
	{
		if(n < 0) 
		{
			buff[i++]='-';
			n = -n;
		}
	}
	while(n) //extraction of digits of n from the least significant digit
	{
		int dig = n%10;
		buff[i++] = (char)(zero+dig);
		n /= 10;
	}
	if(buff[0] == '-') 
		j = 1;
	else j = 0;
	k=i-1;
	while(j<k) //reversing the array of character
	{
		char temp=buff[j];
		buff[j++] = buff[k];
		buff[k--] = temp;
	}	
	bytes = i; //total number of bytes required for storage

	__asm__ __volatile__ (
		"movl $4, %%eax \n\t" //4 is for write function
		"movl $1, %%ebx \n\t" // 1 is for stdout
		"int $128 \n\t"
		:
		:"c"(buff), "d"(bytes) //giving input array and total bytes to store
	) ; 
	return i; //number of characters printed
}

int prints(char *c)
{ // prints the string

	char buff[sBUFF]; //Declares the buffer array to get the resultant string to print
	int i=0,bytes; 
	while(c[i]!='\0')
	{
		buff[i]=c[i];
		i++;
	}
	bytes = i; //allocation of space
	//giving the inputs as write command
	__asm__ __volatile__ (
	"movl $4, %%eax \n\t"
	"movl $1, %%ebx \n\t"
	"int $128 \n\t"
	:
	:"c"(buff), "d"(bytes)
	) ; // $4: write, $1: on stdin
	return i;
}

int printd(float n){ // printFloat.c
	char buff[fBUFF], zero='0';
	int i=0;
	if(n<0)// To handle negative floating points
	{
		buff[i++]='-';
		n = -n;
	}
	int dig;
	int integral = (int)n; //extract integral part of floating number
	
	if(integral==0) //same sequence as that of integer printing
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
	} //the integral part is now completely stored in buff array following the same procedure as that of integer

	//decimal part
	buff[i++]='.'; //the decimal point
	float decimal = n -(float) ((int)n); //extraction of decimal point
	decimal*=10;
	for(j = 0;j<precision;j++) //change the precision during the precprocessing step
	{
		buff[i++]=(char)((int)decimal+zero); 
		decimal-=(float)((int)decimal);
		decimal*=10;
	}
	int bytes = i; //total bytes to be allocated
	__asm__ __volatile__ (
		"movl $4, %%eax \n\t"
		"movl $1, %%ebx \n\t"
		"int $128 \n\t"
		:
		:"c"(buff), "d"(bytes)
	) ; // $4: write, $1: on stdout
	return i; //total characters printed
}

int readi(int* eP)
{
    char buff[iBUFF]; //To hold the string of characters read
    buff[0]='\n'; 
    int ret=1; //number of bytes actually stored using write function
    int num=0,s=1,i=0,digit;//sign will hold the symbol of the integer
    *eP=OK; // the error analysis pointer
    while(ret==1 && buff[0]=='\n') // when no input was given
    //Assembly code instruction to read the string of characters
    {
    __asm__ __volatile__(
        "movl $3, %%eax \n\t" //3 is the argument to read
        "movl $0, %%ebx \n\t" //0 is the argumet to stdin
        "int $128\n\t"          //interrupt call
        :"=r"(ret)              // the value to return
        :"c"(buff),"d"(iBUFF)      // ecx will hold the buffer and d will hold the number of bytes 
        );
	}
	while(buff[i]==' ' || buff[i]=='\t') // to remove the leading space or tab characters
	{
		i++;
	}
	if(buff[i]=='\n') //if only space ot tab characters are present
	{
		*eP=ERR;
    	return 0;
	}

    //printf("ret=== %d\n",ret)
    if(buff[i]=='-') // negative integers
    {
    	if(ret==i+2) //case when only '-' sign is present
    	{
    		*eP=ERR;
    		return 0;
    	}
    	else //change the integer sign
    	{
        	s=-1;
        	++i;
        }
    }

    while(buff[i]!='\n' && buff[i]!=' ' && buff[i]!='\t' && buff[i]!='\0')//start reading the buff array
    {
        if(buff[i]-'0'<10 && buff[i]-'0'>=0) //checking the validity of digit
        {             
            digit=buff[i]-'0';
            num=num*10+digit; //adding to the digits
        }
        else{ //no valid input
            *eP=ERR; //error in input
            return 0; 
        }
        ++i; //analyze the next character
    }
    *eP=OK; //no error found
    if(*eP==0 && ret!=1) 
    	return s*num; //return the value of the number along with the sign
	else if(buff[ret]=='\n'&&buff[ret-1]=='-') //case when only spaces and then '-' character is present
	{
		*eP=ERR;
		return 0;
	}
	else //only - sign is there..no trailing digits
	{
		*eP=ERR;
		return 0;
	}
}

int readf(float *num)
{
	char buff[iBUFF]; 
    buff[0]='\n'; //To hold the string of characters read
    int ret=1; //return value of number of bytes read
    int s=1,i=0,digit;//s will hold the symbol of the integer
    *num=0;
    float integral=0,decimal=0;

    while(ret==1 && buff[0]=='\n') //Assembly code instruction to read the string of characters    
    {
    __asm__ __volatile__(
        "movl $3, %%eax \n\t" //3 is the argument to read
        "movl $0, %%ebx \n\t" //0 is the argumet to stdin
        "int $128\n\t"          //interrupt call
        :"=r"(ret)              // the value to return
        :"c"(buff),"d"(iBUFF)   // ecx will hold the buffer and d will hold the number of bytes 
        );
	}
	while(buff[i]==' ' || buff[i]=='\t') //to ignore the space characters
	{
		i++;
	}
	if(buff[i]=='\n') //when space and tab characters are followed by '\n'
	{
		*num=0;
		return ERR;
	}

	if(buff[i]=='-') //negative floating points handling
	{
		if(ret==i+2) //only negative sign present
		{
			*num=0;
			return ERR;
		}
		else 
		{
			s = -1; // change the sign to be multiplied
			i++;
		}
	}

	while(buff[i]!='\n' && buff[i]!=' ' && buff[i]!='\t' && buff[i]!='\0' && buff[i]!='.')//read the integer before decimal
    {
        if(buff[i]-'0'<10 && buff[i]-'0'>=0) //checking the validity of digit
        {             
            digit=buff[i]-'0';
            integral=integral*10+digit; //stored in the integral part of number
        }
        else{
            *num=0; // else error in input
            return ERR; 
        }
        ++i; //read the next character
    }

    i++; //skip the decimal point if any
    *num+=integral; //integral part of number is set

    //read the decimal part of the floating point
    if(buff[i-1]=='.') //if no decimal part is present, then this step will be skipped
    {
	    int j = 0;
	    while(buff[i]!='\n' && buff[i]!=' ' && buff[i]!='\t' && buff[i]!='\0' && j<=precision)
	    {
	        if(buff[i]-'0'<10 && buff[i]-'0'>=0) //checking the validity of digit
	        {             
	            digit=buff[i]-'0';
	            decimal=decimal*10+digit;
	        }
	        else{
	            *num=0; // else error in input
	            return ERR; 
	        }
	        ++i; //read the next character
	        j++; //increase the precision count
	    }
		//the precision is defined to be 6
	    int div = 10;
	    int k;
		for(k=1;k<j;k++) //now getting the fractional value upto the decided precision
		{
			div*=10;
		}
		decimal = decimal/div; //converting to fraction
		*num+=decimal; //adding to the input number
	}
	

	if(ret!=1) //no error found
	{
    	*num = (*num)*s;//return the value of the number along with the sign
    	return OK;
    }
	else //error only one input which is '\n'
	{
		*num=0;
		return ERR;
	}

}
