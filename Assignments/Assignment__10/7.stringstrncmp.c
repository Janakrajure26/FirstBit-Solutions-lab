#include<stdio.h>
#include<string.h>
int main ()
{
	char str1[]= "cooputer";
	char str2[]="compare";
	
	int result = strncmp(str1,str2,3);//compare first 3 char 
	if ( result ==0)
	{
		printf("first three characters are equal.\n");
	}else if ( result <0)
	{
		printf("str1 is less than str 2 in first 3 characters\n");
	}else
	{
		printf("str1 is greater than str2 in first 3 characters\n");
	}
}