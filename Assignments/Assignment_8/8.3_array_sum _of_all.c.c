#include<stdio.h>
int main () {
	int n, i, sum =0;
	int array [100];

	printf("enter the number of element\n");
	scanf("%d",& n);

	printf("enter element\n",n);
	for(i=0; i<n; i++) 
	{
		scanf("%d",&array[i]);
		sum+=array[i];
	}
    printf("sum of array element %d \n",sum);
    
    return 0;
   
}