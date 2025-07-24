#include<stdio.h>
#include<string.h>
int main ()
{
	char source []= "janak rajure";
	char destination [20];
	strncpy(destination , source, 5);//cpoy first 5 characters from source
	destination[5]='\0';// add null character manually if needed
	
	printf("source : %s\n", source);
	printf("destination:%s\n", destination);
	
	return 0;
}