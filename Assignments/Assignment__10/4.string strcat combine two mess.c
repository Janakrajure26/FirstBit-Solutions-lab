#include<stdio.h>
#include<string.h>
int main ()//join first name + last nmae// combine two messages or path // create dynamic strings
{
char firstname[50]="janak";
char lastname[] ="rajue";

strcat (firstname, lastname);

printf("full name %s\n", firstname);
 return 0;	
}