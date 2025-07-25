#include<stdio.h>
#include<string.h>
int main ()
{
	char mainstr []="programming in c";
	char *substr;
	
	substr= strstr(mainstr, "c");
	
	if (substr!= NULL){
		printf("substring found:%s\n",substr);
		
	}else {
		printf("substring not found \n");
	}
	return 0;
}