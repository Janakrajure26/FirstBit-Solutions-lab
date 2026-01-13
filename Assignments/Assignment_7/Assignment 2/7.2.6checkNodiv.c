#include<stdio.h>

 int checkNoDivisible(int*);
 
 
 
 
int main ()
{  
   	int num;
	
	printf("enter the number\n");
	scanf("%d", &num);
      
 	checkNoDivisible( &num);
    
   
}

 int checkNoDivisible(int *num)
 {
    
	
	if(*num % 3 == 0 && *num % 5== 0 )
	{
		
		printf("number is divisible by both\n");
			
	}
	
	else if (*num % 3 == 0)
	{
		
		printf("number is divisible by three but not by five\n");
		
	}
	
	else if (*num % 5 == 0)
	
	{
		printf("number is divisible by five but not by three\n");
		
	}
	else
	{
		
		printf("divisible by none\n");
	}
 }