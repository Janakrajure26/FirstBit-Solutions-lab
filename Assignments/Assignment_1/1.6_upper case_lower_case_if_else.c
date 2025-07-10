#include<stdio.h>
int main (){
	char ch;
	printf("enter the character");
	scanf("%c",&ch);
	
	if (ch>='A' && ch<='Z')
		printf("character %c is uppercase:\n");
	else
		printf("character %c is lowercase:\n");
		
	
	return 0;
}