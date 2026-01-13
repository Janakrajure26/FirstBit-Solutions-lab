#include<stdio.h>

 void checkNoAmstrong(int*);
int main ()
{ 

   	int n;
	printf("any three digit number:");
	scanf("%d",&n);
	
     checkNoAmstrong(&n);
   
}

void checkNoAmstrong(int * n)
{

   	int arm = 0, r,c ;
	

	c=*n;// we store the original number in c
	while(n>0)
	{
		r=*n%10; // number mode by 10
		arm=(r*r*r)+arm;
		*n=*n/10 ; /// number divide by 10
		
	}
	if(c==arm){
			printf("armstrong");
	}else{
		    printf("not armstrong");
	}
	
}