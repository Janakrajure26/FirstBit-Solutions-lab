#include<stdio.h>
int main (){
	int num , first ,last;
	printf("enter the three digit number");
	scanf("%d",&num);
	
	first= num % 10;
	last = num  /100;
	
	if (first == last)
		printf("%d number is palidrome \n",num);
	else
		printf("%d number is not palidrome\n",num);
		
		return 0;
}