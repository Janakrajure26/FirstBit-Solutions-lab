#include<stdio.h>
int checkPalidrome(int no)
 {
 	int  first, last;
 	 first= no % 10 ;
	 last=  no / 100 ;
	 if(first== last)
	  return 1;
	else
	  return 0;
	 
 }
int main()
{
	int  no ;
	printf("enter the three number:\n");
	scanf("%d",&no);
	 
	if (checkPalidrome(no) )
	{
		printf("%d year is palidrome\n", no);
	}
	else
	{
		printf("%d year is not palidrome\n", no);
	}
	
}