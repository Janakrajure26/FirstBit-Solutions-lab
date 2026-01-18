#include<stdio.h>

 int findSum(int arr[] , int n );
 
 
int main () {
	int n, i, total;
	int array [100];

	printf("enter the number of element\n");
	scanf("%d",&n);

	printf("enter element\n");
	for(i=0; i<n ;i++)
	{
		scanf("%d",&array[i]);
	}
	
 total = findSum( array,n );

    printf("sum of array element %d \n",total);
    
    return 0;
   
}

int findSum(int arr[], int n)

{
	
	int i , sum =0;
	
		for(i=0; i<n; i++) 
	{
	
		sum = sum + arr[i];
	}
	
	return sum ;
}