#include<stdio.h>
#include<string.h>
int main () {
	int i, count =0;
	char str [100];

	printf("enter the string ");
	scanf("%s", str);

	for(i=0; str[i]!='\0'; i++) {
		if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'||

        str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str [i]=='O'|| str[i]=='u')
			{
				count ++;
			}
	}


	printf("total vowel= %d\n", count);

	return 0;

}