#include<stdio.h>

 int odd_even(int*);  // function declear
 

int  main() // function calling
{
		int no  ;
     printf("enter number\n");
     scanf("%d",&no);
     
	  odd_even(&no);
	
	
	return 0;
}

 int odd_even(int *no)
 
 {
  // function defination
 if (*no%2==0)
 {
    printf(" %d is even", *no);// function defination
  return 1;
  
 }
 
else
{
    printf("%d is odd", *no);
 return 0;

}
 	
 }