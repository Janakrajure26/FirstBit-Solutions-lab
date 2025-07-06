#include<stdio.h>
int main ()
{
	char check_student;
	double total_price;
	
	printf("enter the price:\n");
	scanf("%1f",& total_price);
	
	printf(" are you student yes or no");
	scanf("%c", & check_student);
	
	if ( check_student == 'y');
	{
		if ( total_price>=500)
		{
			total_price = total_price - (0.2* total_price);
			printf("your total price after '20%' discount is : %0.21f, total_price");
		}
        else
		{
			total_price = total_price - (0.1* total_price);
			printf("your total price after '10%' discount is : %0.21f", total_price);
    	}
    }
     else
    {
    	if (total_price>=600)
    	{
    		total_price = total_price - (0.15* total_price);
    		printf("your total price after '15%'discount is : %0.21f", total_price);
		}
		else
		{
			printf("no discount final price is : %0.21f", total_price);
		}
	}
	return 0;
}