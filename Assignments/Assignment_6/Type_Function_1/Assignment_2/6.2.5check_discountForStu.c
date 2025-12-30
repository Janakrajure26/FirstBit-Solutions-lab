#include<stdio.h>

void checkDiscountFSandNS();// declaration

int main () // function call
{
 
checkDiscountFSandNS();
	
}

void checkDiscountFSandNS() // definition
{
   	double total_price;
	char check_student;
	
	printf("Enter the price\n");
	scanf("%lf",&total_price);
	
	printf("Are you student y or n \n");
	scanf(" %c", &check_student);
	
	if (check_student == 'y')
	{
		if  (total_price>=500)
		{
			total_price = total_price - (0.2* total_price);
			printf("your total price after 20 percent discount is : %0.2lf", total_price);
		}
        else
		{
			total_price = total_price - (0.1* total_price);
			printf("your total price after 10 percent discount is : %0.2lf", total_price);
    	}
    }else
    {
    	if (total_price>=600)
    	{
    		total_price = total_price - (0.15* total_price);
    		printf("your total price after 15 percent is : %0.2lf", total_price);
		}
		else
		{
			printf("no discount final price is : %0.2lf",total_price);
		}
	} 
}
