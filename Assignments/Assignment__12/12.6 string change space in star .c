#include<stdio.h>
#include<string.h>
int main ()
{
	int i ;
	char str [100];
	
	printf("enter the string ");
	 fgets(str , sizeof(str),stdin);
	
	for (i=0; str[i]!='\0';i++)
	 {
	 	if(str[i]=='\n'){
	 		str[i]=='\0';
	 		
	 		break;
		 }
	 }
	 
	 for(i=0; str [i]!='\0'; i++)
	 
	 {
	 	if(str[i]==' ')
	 	{
	 		str[i]='*';
		 }
	}
		 
		 printf("enter the modified string %s\n " , str);
		 
		 return 0;
		 
	
}