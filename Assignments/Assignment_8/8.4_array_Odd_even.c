#include<stdio.h>
int main () {
	int n, i ;
	int  array[100];

	printf("enter the number of element:\n");
	scanf("%d",&n);

	printf("enter element:\n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&array[i]);
	}

	printf("even numbers in array : \n" );
	for (i=0; i<n ; i++)
	{
		if(array[i] % 2==0) {
			printf("%d",array[i]);
		}
	}
	printf("odd number in array:\n");
	for (i=0; i<n; i++) {
		if(array [i]%2!=0) {
			printf("%d",array[i]);
		}
	}
	return 0;
}
