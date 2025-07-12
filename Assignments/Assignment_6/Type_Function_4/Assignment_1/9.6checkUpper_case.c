#include<stdio.h>
char upperOrlower(char ch)
{
	if(ch>='A'&& ch<='Z')
	return 1;
	else
	return 0;
}


int main (){
	char ch;
	printf("enter the character");
	scanf("%c",&ch);
	
	if (upperOrlower(ch))
		printf("character %c is uppercase:\n");
	else
		printf("character %c is lowercase:\n");
		
	
	return 0;
}