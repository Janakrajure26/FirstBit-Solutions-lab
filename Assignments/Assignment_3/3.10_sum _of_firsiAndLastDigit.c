#include<stdio.h>
int main ()
{
	int n, first , last ;
	printf("enter the number");
	scanf("%d", & n);
	last = n%10;
	first = n;
	while(first >=10){
		first /= 10;
	}
	printf("sum of first and last number %d \n", first + last );
	
	return 0 ;
}