#include<stdio.h>

void check_alphabetletter (char*) ;// declartion

int main ()
{     
    char ch;
	printf("enter the character");
	scanf(" %c", &ch);
	
	 check_alphabetletter(&ch);//call
	
	
	
}

void check_alphabetletter (char *ch)
{
	
	if((*ch>='A'&& *ch<='Z')||(*ch>='a'&& *ch<='z')){
		char lower = (*ch>='A'&& *ch<='Z')?*ch+32:*ch;// definition

		
		if
		(lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u'){
	
	       	printf("it is vowel");
			
		 }else{
		 	
		 	printf("it is a consonant");
		 	
		 }
		}else{
			
			printf("it is a  not alphabet");
			
		}
}

