#include<stdio.h>
int findmin(int arr[], int size)
{
	int min =arr[0];
	for(int i=1;i<size;i++)
	{
		if(arr[i]<min)
		min =arr[i];
	}
	return min;
	
}
int findmax(int arr[],int size)
{
	int max =arr[0];
	for (int i=1;i<size;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	return max; 
}
int main ()
{
	int arr[]={23,5,78,12,45,1,90,18};
	
	int size=sizeof(arr)/sizeof(arr[0]);
    int min =findmin( arr,size);//function call
    int max =findmax( arr,size);//function call
	
	printf("minimum number%d\n",min);
	printf(" maximum number%d\n", max);
	
	return 0;
}

