#include<stdio.h>
#include<string.h>
int main ()
{
	char str1 [30]= " hello";
	char str2 []="world";
	
	//append 3 characters from str2 io str 1
	strncat(str1, str2, 3);
	
	printf("resulting string : %s\n", str1);
	return 0 ;
}