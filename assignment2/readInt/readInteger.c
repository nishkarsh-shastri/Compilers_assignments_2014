
#define BUFF 20

int readi(int* eP)
{
    char buff[BUFF];  //To hold the string of characters read
    int ret; //return value
    int num=0,s=1,i=0,digit;//sign will hold the symbol of the integer

    //Assembly code instruction to read the string of characters
    __asm__ __volatile__(
        "movl $3, %%eax \n\t" //3 is the argument to read
        "movl $0, %%ebx \n\t" //0 is the argumet to stdin
        "int $128\n\t"          //interrupt call
        :"=r"(ret)              // the value to return
        :"c"(buff),"d"(BUFF)      // ecx will hold the buffer and d will hold the number of bytes 
        );

    if(buff[0]=='-')
    {
        s=-1;
        ++i;
    }

    while(buff[i]!='\n' && buff[i]!=' ' && buff[i]!='\t' && buff[i]!='\0')
    {
        if(buff[i]-'0'<10) //checking the validity of digit
        {             
            digit=buff[i]-'0';
            num=num*10+digit;
        }
        else{
            *eP=1; // else error in input
            return 0; 
        }
        ++i; //read the next character
    }
    *eP=0; //no error found
    return s*num; //return the value of the number along with the sign
}