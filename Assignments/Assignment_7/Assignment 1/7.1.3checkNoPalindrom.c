#include<stdio.h>
    void number_is_palidrom_or_not (int* );
 
    int main ()
{
	int num ;
	printf("enter the three digit number");
	scanf("%d",&num);
  	number_is_palidrom_or_not(&num);
	
}
    void number_is_palidrom_or_not (int *num )
{
   int 	first ,last;
	
	first= *num % 10;
	last = *num  /100;
	
	if (first == last)
	
		printf(" number is palidrome \n");
	else
		printf("number is not palidrome\n");	

}