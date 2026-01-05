#include<stdio.h>

 int checkNoDivisible();
 
 
 
 
int main ()
{
      int res;
 res =	checkNoDivisible();
    
    	if(res == 1)
	{
		
		printf("number is divisible by both\n");
			
	}
	
	else if (res == 2)
	{
		
		printf("number is divisible by three but not by five\n");
		
	}
	
	else if (res == 3)
	
	{
		printf("number is divisible by five but not by three\n");
		
	}
	else
	{
		
		printf("divisible by none\n");
	}
}

 int checkNoDivisible()
 {
     	int num;
	
	printf("enter the number\n");
	scanf("%d", &num);
	
	if(num % 3 == 0 && num % 5== 0 )
	{
		
		return 1;
			
	}
	
	else if (num % 3 == 0)
	{
		
		return 2;
		
	}
	
	else if (num % 5 == 0)
	
	{
		return 3;
		
	}
	else
	{
		
		return 0;
	}
 }