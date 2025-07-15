#include<stdio.h>
int main ()
{
	// int put 6 1+2+3 =6
	
	int n,i =1, sum=0 ;
	
	printf("enter any number :");
	scanf("%d",&n);
	i=1;
	while (i<n)
	{
		 if(n%i==0){
		 
     	sum=sum+i;
	}
	i++;
	}
	
	if(sum ==n){
		printf("number is perfect");
	}else{
		printf("number is not perfect");
	}
}