#include<stdio.h>
int main () {
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
		printf(" prime \n");
	else printf("not prime\n");

	return 0;
}