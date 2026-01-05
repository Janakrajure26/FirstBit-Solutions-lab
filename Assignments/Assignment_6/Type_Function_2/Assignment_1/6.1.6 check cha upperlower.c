#include<stdio.h>
int check_alphabet_is_upper_case_or_not();

int main ()
{ int res;
	res = check_alphabet_is_upper_case_or_not();
		if (res==1)
		printf("character %c is uppercase:\n");
	else
		printf("character %c is lowercase:\n");
	
}
int check_alphabet_is_upper_case_or_not()
{
	char ch;
	printf("enter the character");
	scanf(" %c",&ch);
	
	if (ch>='A' && ch<='Z')
		return 1;
	else
		return 0;
}
