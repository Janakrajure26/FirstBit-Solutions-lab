#include<stdio.h>

int main(){
	int a= 15;
	int b=20;
	int temp ;
	printf("befor swapping \n");
	printf("a=%d, b=%d\n", a,b);
	temp = a;
	a=b;
	b= temp;
	printf("after sawpping \n");
	printf("a=%d, b=%d\n",a,b);
}