#include <unistd.h>
int main()
{
	char *str = "My second program\n";
	write(1,str,19);
	_exit(0);
}