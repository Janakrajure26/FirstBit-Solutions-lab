#include<stdio.h>
#include<string.h>
int main ()
{
	char str []= "hello";
	printf(" length : %1u",strlen(str)); //output 5
	return 0;
	
}

/*purpose retrun the length of string (excluding\0).
parameter const char*str(1 parameter)
returns: size_t(number of characters)*/
