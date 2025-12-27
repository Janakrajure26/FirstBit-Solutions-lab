#include<stdio.h>

int countDigits(int num)
{
	
	int count = 0;
	while ( num!=0)
	{
		count++;
		num = num / 10;
	}
	return count ;
}

  int  isArmstrong(int num)
  {
  	int original = num ;
  	int sum = 0;
	int digits = countDigits(num);
	
	
	while(num != 0)
	{
		int digit = num % 10 ;
		
		int power =1;
		
		for (int i= 1; i<=digits; i++)
		{
			power = power * digit ;
		}
		
		sum = sum + power;
		num = num / 10 ;
	}
	
	return ( sum == original);
	
   } 
   
   int main ()
   {
   	int n ;
   	printf("enter the no");
   	scanf("%d", &n);
   	
   	printf("armstrong number from 1 to %d are \n", n);
   	
   	for( int i = 1; i<=n; i++)
   	{
   		if (isArmstrong(i))
   		{
   			printf("%d\n", i);
		 }
    }

   }
 