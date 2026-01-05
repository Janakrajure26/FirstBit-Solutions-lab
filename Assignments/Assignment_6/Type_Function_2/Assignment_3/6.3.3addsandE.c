#include<stdio.h>
int  addStartToend(); // declaration

int main ()
{
	int res ;
 res = addStartToend();// call
 
 printf("sum is %d", res);

 
}

int addStartToend()// definition
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
	return sum ; 
}