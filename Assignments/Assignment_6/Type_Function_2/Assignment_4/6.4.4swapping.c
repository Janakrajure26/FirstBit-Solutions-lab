#include<stdio.h>
int swapno();
int main(){
  int res;
  res = swapno();
  
  if( res ==1)
  	printf("swap done successfully \n");

    
}
int swapno()
{
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
	
	return 1;
}
