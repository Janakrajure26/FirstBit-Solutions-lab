#include<stdio.h>
float salary_calculation();

int  main ()
{
  float total_salary;
  
   total_salary = salary_calculation();
	printf("total salary =%.2f\n", total_salary);
}
float salary_calculation ()
{
	
		float  basic, da, ta ,hra, total;
	
   printf("enter the basic salary");
   scanf("%f", & basic);
   
   if (basic >= 5000)
   {
   	da =  basic * 0.10;
   	ta = basic * 0.20;
   	hra = basic * 0.25;
   	
   } else{
   	
   	da = basic *0.15;
   	ta = basic * 0.25;
   	hra = basic * 0.30;
   }
   total = basic+ da+ta+hra;
    return total ;
}