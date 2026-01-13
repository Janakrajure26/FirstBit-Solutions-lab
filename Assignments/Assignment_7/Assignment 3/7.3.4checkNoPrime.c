#include<stdio.h>

void checkNoIsPrime(int*);//declration

int main () {

 int no ;
	printf("enter the number\n", no);
	scanf("%d",& no);
	
 checkNoIsPrime(&no);// call
	

}
void checkNoIsPrime(int * no)//definition
{
	int i=2, isprime = 1 ;

	if ( *no <= 1) {
		isprime =0;
	} else {
		while (i<=*no/2) {
			if(*no%i==0) {
				isprime=0;
				break;
			}
			i++;
		}
	}
	if(isprime)
			printf(" prime \n");
	else 
     	printf("not prime\n"); 
	
}