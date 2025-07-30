#include<stdio.h>
#include<string.h>
int main ()
{
	int i, wordcount =0, length ;
	char str[100];
	
	printf("enter the string \n");
	fgets(str, sizeof(str),stdin);
	
	str[strcspn(str,"\n")] ='\0';
	length = strlen(str);
	
	for (i=0;i<length;i++)
	{
		if((i==0 && str[i]!=' ')||(str[i]!=' '&&str[i-1]==' ')){
			wordcount++;
		}
	}
	printf("enter the total no wordcount %d\n", wordcount);
	return 0;
	
}