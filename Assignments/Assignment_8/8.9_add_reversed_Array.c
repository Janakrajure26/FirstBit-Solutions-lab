#include<stdio.h>
int main ()
{
	int n , i;
	int array [100];
	
	printf("enter the number of array:\n");
	scanf("%d", &n);
	
	printf("enter the element:\n");
	for (i=0; i<n ; i++)
	{
		scanf("%d",&array[i]);
	}
	
	printf("reversed array\n");
	for(i=n-1; i>=0; i--)
	{
		printf("%d",array[i]);
		
	}
	return 0;
}