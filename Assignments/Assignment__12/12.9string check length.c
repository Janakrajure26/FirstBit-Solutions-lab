#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100], str2[100];
	 int length1 =0 , length2 =0;
	 int i;
	 
	 printf("enter the first string \n");
    i=0;	 
	 while ((str1[i]=getchar())!='\n')
	 {
	 	i++;
	 }
	 str1[i]='\0';
	 length1= i;
	 
	 printf("enter the second string\n");
	 i=0;
	 while ((str2[i]=getchar())!='\n')
	 {
	 	i++;
	 }
	 str2[i]='\0';
	 length2= i;
	 
	 if(length1>length2){
	 	printf("larger string  is %s \n",str1);
	 	
	 }else if(length1<length2){
	 	printf("larger string is %s\n",str2);
	 }else{
	 	printf("both string are equal\n");
	 }
	 
	 return 0;
}