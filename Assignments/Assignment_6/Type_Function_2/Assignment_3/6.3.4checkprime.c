#include<stdio.h>

int checkNoIsPrime();//declration

int main () {
	int res ;
res = checkNoIsPrime();// call

if(res == 1)
		printf(" prime \n");
	else printf("not prime\n"); 

}
int checkNoIsPrime()//definition
{
   int no, i=2, isprime = 1 ;
	printf("enter the number\n", no);
	scanf("%d",& no);

	if ( no <= 1) {
		isprime =0;
	} else {
		while (i<=no/2) {
			if(no%i==0) {
				isprime=0;
				break;
			}
			i++;
		}
	}
	if(isprime)
		return 1;
	
}