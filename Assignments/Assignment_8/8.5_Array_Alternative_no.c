#include<stdio.h>
int main ()
{
	int n , i;
	int array[100];
	
	printf("enter the number of elemnt\n");
	scanf("%d",&n);
	
	printf("enter the element \n");
	for (i=0; i<n; i++)
	{
	scanf("%d",& array[i]);
    }
    printf("print  the alternative numbers\n");
    for(i=0; i<n; i+=2)
    {
    	printf("%d",array[i]);
	}
	return 0;
	
}