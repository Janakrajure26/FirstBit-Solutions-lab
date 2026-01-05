#include<stdio.h>
    int number_is_palidrom_or_not ();
 
    int main ()
{
	int res;
  res =	number_is_palidrom_or_not();
	
		if (res == 1)
		printf(" number is palidrome \n");
	else
		printf("number is not palidrome\n");
	
}
    int  number_is_palidrom_or_not ()
{
	int num , first ,last;
	printf("enter the three digit number");
	scanf("%d",&num);
	
	first= num % 10;
	last = num  /100;
	
	if (first == last)
		return 1;
	else
		return 0;
		

}