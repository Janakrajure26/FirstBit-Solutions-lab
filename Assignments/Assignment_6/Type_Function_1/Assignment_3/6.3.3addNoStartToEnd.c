#include<stdio.h>
void addStartToend(); // declaration

void main ()
{
 addStartToend();// call
}

void addStartToend()// definition
{
    	int start , end , sum =0, temp;
	temp = start;
	printf("enter the start number");
	scanf("%d", &start);
	printf(" enter the end number");
	scanf("%d", &end);
	while (temp<=end){
		sum +=temp;
		temp++;
	}
	printf("the sum of number from %d to%d is; %d\n", start ,end , sum);
}