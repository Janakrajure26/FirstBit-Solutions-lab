#include<stdio.h>

 int  checkNoAmstrong();
int main ()
{ int result ;
    result = checkNoAmstrong();
    if(result==1){
		printf("armstrong");
	}else{
		printf("not armstrong");
	}
}

int checkNoAmstrong()
{

   	int n, arm = 0, r,c ;
	
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
		return 1;
	}else{
		return 0;
	}
	
}