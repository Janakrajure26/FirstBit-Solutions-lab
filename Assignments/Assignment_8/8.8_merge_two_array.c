#include<stdio.h>
int main ()
{
	int n , i ;
	int array [100] , array1[100], array2[100]  merge[200];
	
	printf("enter the number of element\n");
	scanf("%d", &n );
	
	printf("enter %d the element ");
	for(i=0; i<n ; i++)
	{
		scanf("%d", &array [i]);
	}
	 
	 printf("enter %d the number in array 1 \n");
	 for (i=0; i< n ; i++)
	 {
	 	scanf("%d", &array1[i]);
	 	
	 }
	  printh("enter %d the number in array 2\n ");
	  for (i=0; i<n ; i++)
	  {
	  	scanf("%d", &array2[i]);
	  }
	  
	  
	 
}