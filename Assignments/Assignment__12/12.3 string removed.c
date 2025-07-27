#include<stdio.h>
#include<string.h>
int main ()
{
	int n , i;
	
	char str [100];
	
	printf("enter the string\n");
	scanf("%s",str);
	
	printf("enter the string you want to remove");
	scanf("%d",&n);
	
	for(i=n;str[i]!='\0';i++)
	{
		str[i]= str[i+1];
	}
	
	printf("string after removerd ch at index %d: %s\n", n,str);
	
	return 0;
}