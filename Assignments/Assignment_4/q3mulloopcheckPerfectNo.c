#include <stdio.h>
int isperfect(int num)
{
	int sum = 0;
	
	for(int i = 1; i<=num/2;i++)
	{
		if(num % i == 0)
		{
			sum = sum + i;
		}
	}
	
	if(sum == num && num !=0)
	
		return 1;
	else
	
	   return 0;	
	
}

int main ()
{
	int n ;
	
	printf("enter value of n");
	scanf("%d",&n);
	
	printf("perfect number from 1 to %d are \n", n);
	
	for (int i=1; i<=n ; i++)
	{
		if (isperfect(i))
		{
			printf("%d\n",i);
		}
	}
}