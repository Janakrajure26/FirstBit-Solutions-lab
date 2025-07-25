#include<stdio.h>
#include<string.h>
int main ()
{
	char str [] = "hello world ";
	char * ptr ;
	
	ptr = strrchr (str , 'o');// finding last occurence of 'o'
	
	if (ptr != NULL){
		printf("last 'o' found at index: %d\n",ptr -str);
		
		printf("strin gfrom last 'o'%s\n", ptr);
	} else {
		(" character not found \n");
	}
	return 0;
}