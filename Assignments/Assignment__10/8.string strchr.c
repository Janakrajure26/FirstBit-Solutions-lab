#include<stdio.h>
#include<string.h>
int main ()
{
	char str[] = "hello world";
	char *ptr ;
	
	ptr = strchr(str,'w');
	 if (ptr != NULL)//find the first occurrence of 'w' 
	 {
	 	printf("characyer found at positin :%1d\n", ptr - str);
	 	printf("remaning string form 'w':%s\n", ptr);
	 }else{
	 	printf("character not found\n");
	 }
	 return 0;
}