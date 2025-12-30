#include<stdio.h>

 void checkNoDivisible();
int main ()
{

	checkNoDivisible();

}

 void checkNoDivisible()
 {
     	int num;
	
	printf("enter the number\n");
	scanf("%d", &num);
	
	if(num % 3 == 0 && num % 5== 0 )
	{
		
		printf("number is divisible by both\n");
			
	}
	
	else if (num % 3 == 0)
	{
		
		printf("number is divisible by three but not by five\n");
		
	}
	
	else if (num % 5 == 0)
	
	{
		printf("number is divisible by five but not by three\n");
		
	}
	else
	{
		
		printf("divisible by none\n");
	}
 }