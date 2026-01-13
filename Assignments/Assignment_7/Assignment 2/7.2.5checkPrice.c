#include<stdio.h>
void checkDiscountFSandNS(double* , char*);// declaration

int main () // function call
{
 
   	double total_price;
	char check_student;
	
	printf("Enter the price\n");
	scanf("%lf",&total_price);
	
	printf("Are you student y or n \n");
	scanf(" %c", &check_student);
 
 checkDiscountFSandNS(&total_price, &check_student);


	
}

void checkDiscountFSandNS(double *total_price,char * check_student) // definition

{
  
	
	if (*check_student == 'y')
	{
		if  (*total_price>=500)
		{
			*total_price = *total_price - (0.2* (*total_price));
		}
        else
		{
			*total_price = *total_price - (0.1* (*total_price));

    	}
    }else
    {
    	if (*total_price>=600)
    	{
    		*total_price = *total_price - (0.15* (*total_price));
    	
		}
		
	} 
	 printf("total price to pay : %.2lf\n", *total_price);
}
