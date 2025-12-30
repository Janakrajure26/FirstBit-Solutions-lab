#include<stdio.h>

void checkNoStrong();

int main ()
{
	checkNoStrong();
}
void checkNoStrong()
{
	int n, temp ,digit ,sum =0 ;
	
	printf("enter the number :");
	scanf("%d", &n);
	 temp=n;
	 while(temp>0)
	 {
	 	digit =temp%10;
	 	
	 	int fact =1;
	 	for (int i=1;i<=digit; i++){
	 		fact *=i;
		 }
	 	sum +=fact;
	 	temp/= 10;
	 }
	 if (sum ==n)
	 {
	 	printf("number is strong");
	 }else{
	 	printf(" number is not strong");
	 }
}