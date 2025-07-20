#include<stdio.h>
int main ()
{
	int array1[100], array2[100], sum[100];
	int n , i ;
	
	printf("enter the number of element\n");
	scanf("%d", &n);
	
	printf("enter the element for first array \n");
	for (i=0; i<n ; i++)
	{
		scanf("%d",&array1[i]);
	}
	
	printf("enter the element for second array\n ");
	for(i=0;i<n; i++)
	{
		scanf("%d",&array2[i]);
	}
	 for (i=0; i<n ; i++)
	 {
	 	sum[i]=array1[i]+array2[i];
	 }
	 printf("sum of array 1 and array 2 is \n");
	  for(i=0;i<n; i++)
	  {
	  	printf("%d",sum [i]);
	  }
	  return 0; 
}