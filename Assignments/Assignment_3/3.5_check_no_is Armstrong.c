#include<stdio.h>
int main ()
{
	int n, arm, r,c ;
	
	printf("any three digit number:");
	scanf("%d",&n);
	c=n;// we store the original number in c
	while(n>0)
	{
		r=n%10; // number mode by 10
		arm=(r*r*r)+arm;
		n=n/10 ; /// number divide by 10
		
	}
	if(c==arm){
		printf("armstrong");
	}else{
		printf("not armstrong");
	}
}