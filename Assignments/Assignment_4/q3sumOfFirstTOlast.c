#include<stdio.h>
int main ()
{
	int   sum =0, first , last ;
	
	printf("enter the first and last no");
	scanf("%d %d", &first , &last);
	
	for(int i = first ;i<=last; i++)
	{
		sum = sum + i ;
	}
	printf("sum of f to l is = %d",sum );
	
}