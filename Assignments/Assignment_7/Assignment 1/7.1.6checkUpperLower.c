#include<stdio.h>
void check_alphabet_is_upper_case_or_not(char*);

int main ()
{ 
    
	char ch;
	printf("enter the character");
	scanf(" %c",&ch);
	
	 check_alphabet_is_upper_case_or_not(&ch);

	
}
void check_alphabet_is_upper_case_or_not(char *ch)
{
	
	if (*ch>='A' && *ch<='Z')
		printf("character %c is uppercase:\n");
	else
		printf("character %c is lowercase:\n");

}
