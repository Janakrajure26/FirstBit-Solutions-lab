#include<stdio.h>
int  checkcharacter(char ch) {
	if((ch>='A'&& ch<='Z')||(ch>='a'&&ch<='z')) {
		char lower = (ch>='A'&&ch<='Z')?ch+32:ch;

		if
		(lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u') {
			return 1;
		} else {
			return 2;
		} 
		
		}
		else {

			return 0;
		}

	}


	char main() {
		char ch;
		printf("enter the character");
		scanf("%c", &ch);
		int  result = checkcharacter(ch);

		if(result == 1)
			printf("%c is a vowel.\n",ch);

		else if(result== 2)
			printf("%cis aconsonant\n",ch);

		else
			printf("%c is not an alphabetletter .\n",ch);


		return 0;
	}