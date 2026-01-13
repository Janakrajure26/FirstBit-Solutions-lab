#include<stdio.h>
void  addStartToend(int*, int*); // declaration

int main ()
{
		int start , end ;
	
	printf("enter the start number");
	scanf("%d", &start);
	printf(" enter the end number");
	scanf("%d", &end);
	
   addStartToend(&start, &end );// call

 
}

void addStartToend(int *start , int *end)// definition
{
    int temp = *start ;
    int sum = 0 ;
	while (temp<=*end){
		sum +=temp;
		temp++;
	}
	 printf("sum is %d", sum);

}