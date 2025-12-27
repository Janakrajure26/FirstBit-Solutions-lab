#include<stdio.h>
int isprime(int num )
{
	if (num<=1)
	     return 0 ;
	     
	     for (int i = 2; i<=num / 2 ;i++ )
	     {
	     	if (num % i == 0)
	     	
	     	return 0;
	     	
		 }
		 
		 return 1;
}


 int main ()
 {
 	int n ;
 	
 	printf("enter no ");
 	scanf("%d",&n);
 	
 	printf("prime from 1 to %d are : \n", n);
 	
 	for(int i = 1; i<=n; i++)
 	{
 		if (isprime(i))
 		
 		printf("%d\n",i);
	 }
 }