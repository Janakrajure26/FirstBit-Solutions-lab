#include<stdio.h>

int  check_alphabetletter () ;// declartion

int main ()
{     
    int res;
	res = check_alphabetletter();//call
	
	if(res==1)
	printf("it is vowel");
	else if(res==2)
	printf("it is a consonant");
	else
	printf("it is a  not alphabet");
}

int check_alphabetletter ()
{
	char ch;
	printf("enter the character");// definition
	scanf(" %c", &ch);
	if((ch>='A'&& ch<='Z')||(ch>='a'&&ch<='z')){
		char lower = (ch>='A'&&ch<='Z')?ch+32:ch;
		
		if
		(lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u'){
			return 1;
			
		 }else{
		 	return 2;
		 }
		}else{
			return 0;
		}
}

