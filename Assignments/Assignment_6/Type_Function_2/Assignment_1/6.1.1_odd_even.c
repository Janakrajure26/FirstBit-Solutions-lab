#include<stdio.h>



 int odd_even()  // function declear
 {
 	int no;
     printf("enter number");
     scanf("%d",&no);
 if (no%2==0)
 
  return 1;
 
else

 return 0;

 	
 	
 }

int  main() // function calling
{
	int result= odd_even();
	if(result==1)
	printf("even");
	else
	printf("odd");
	return 0;
}
