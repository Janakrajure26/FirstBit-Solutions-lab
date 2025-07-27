#include<stdio.h>
#include<string.h>

int main()
{
	int  i, found =0;
	 char str[100];
	char ch;
	printf("enter the string\n ");
	gets(str);
	
	printf("enter the search number you want \n");
	scanf("%c",& ch);
	
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==ch)
		{
			printf("%c is found at %d (index %d).\n", ch,i+1, found=1);
		}
	}
     if(found==0){
     	printf("chara %c not found in the string \n", ch);
     	
	 }
	 return 0;
}