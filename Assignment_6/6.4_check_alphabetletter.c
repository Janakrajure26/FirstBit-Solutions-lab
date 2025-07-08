#include<stdio.h>

void check_alphabetletter () ;

void main ()
{
	check_alphabetletter();
	
}

void check_alphabetletter ()
{
	char ch;
	printf("enter the character");
	scanf("%c", &ch);
	if((ch>='A'&& ch<='z')||(ch>='a'&&ch<='z')){
		char lower = (ch>='a'&&ch<='z')?ch+32:ch;
		
		if
		(lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u'){
			printf("%c is a vowel.\n",ch);
			
		 }else{
		 	printf("%cis aconsonant\n",ch);
		 }
		}else{
			printf("%c is not an alphabetletter .\n",ch);
		}
}

