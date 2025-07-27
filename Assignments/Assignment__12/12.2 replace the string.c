#include<stdio.h>
#include<string.h>
int main ()
{   int i;
	char  str[100];
	
	printf("enter the string\n");
	scanf("%s",str);
	
	for(i=0; str[i]!='\0'; i++)
	
	if(str[i]=='a')
	{
		str[i]='&';
	}
	
	printf("modfied string %s\n", str);
	
	return 0;
}