#include<stdio.h>
void check_alphabet_is_upper_case_or_not();

void main ()
{
	check_alphabet_is_upper_case_or_not();
	
}
void check_alphabet_is_upper_case_or_not()
{
	char ch;
	printf("enter the character");
	scanf("%c",&ch);
	
	if (ch>='A' && ch<='Z')
		printf("character %c is uppercase:\n");
	else
		printf("character %c is lowercase:\n");
}
