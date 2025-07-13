#include<stdio.h>

 int checkevenodd(int num)
 {
 	if(num %2==0)
 	return 1;// true even
 	else
 	return 0; // flase odd
 }

int main ()
 {
	int n;
	printf("enter the number\n");
	scanf("%d",& n );
	
	
	int res=checkevenodd(n);
	if(res==1)
	printf("%d number is even\n" ,n);
	else
	printf("%d number is odd\n", n);
	
	return 0;
	
}