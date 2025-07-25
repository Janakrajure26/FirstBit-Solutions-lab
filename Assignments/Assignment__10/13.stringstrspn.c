#include<stdio.h>
#include<string.h>
int main ()

{
	char str1[]="abc123";
	char str2[]="abc";
	
	size_t result + strspn(str1, str2);//returns number of char match
	
	printf("nuber of initial char in %s fir %s %zu\n", str1, str2,result);
	
	return 0;
}