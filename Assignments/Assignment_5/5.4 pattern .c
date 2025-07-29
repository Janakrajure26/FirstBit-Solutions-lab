#include<stdio.h>
int main ()
{
	int i, j, space;
	int n =5;
	
	for (i=0; i<n; i++)
	{
		for (space=0; space<n-i;space++)
		{
			printf(" ");
		}
	
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}