#include<stdio.h>
#include<stdlib.h>

int main (){
	int n ,i;
	int *arr;
	int min , max;
	
	printf("how many numbers");
	scanf("%d", &n);
	
	arr= (int*)malloc(n * sizeof(int));
	
	printf("enter the number\n",n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	min =arr[0];
	max= arr[0];
	
	for(i=1;i<n;i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
			
		}
		if(arr[i]>max)
		{
			max= arr[i];
		}
	}
	
	printf("smallest number =%d\n", min);
	printf("largest number = %d\n", max);
	
	free(arr);
	
	return 0;
	
}
