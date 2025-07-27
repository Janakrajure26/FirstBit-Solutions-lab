#include<stdio.h>
#include<string.h>
int main ()
{
	int i , j=0 ; 
	char str[100], result[100];
	
	printf("enter the string ");
	scanf("%s", str);
	
	for(i=0;str[i]!='\0'; i++)
	
	{
		if(i %2==0)
		{
			result[j]=str[i];
			j++;
		}
		
		
	}
	result[j]='\0';
	
	printf("entr the even characheter %s\n", result);
	
	return 0;
}