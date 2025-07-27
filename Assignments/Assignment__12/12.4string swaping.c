#include<stdio.h>
#include<string.h>
int main ()
{
    int len , temp ;
	char str [100];
	
	printf("enter string :\n");
	scanf("%s", str);
	
	len = strlen(str);
	
	if(len<2){
		printf("string too short to swap!\n");
		return 0;
	}
	temp = str[0];
	str[0]= str[len-1];
	str[len -1] = temp ;
	
	printf("show the string after swapping %s\n", str);
	
	return 0;
	
	
}