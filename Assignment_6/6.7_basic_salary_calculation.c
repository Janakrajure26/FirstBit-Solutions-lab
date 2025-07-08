#include<stdio.h>
void salary_calculation();

void main ()
{

  salary_calculation();
	
}
void salary_calculation ()
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
   total = da+ta+hra;
   printf("total salary =%.2f\n",total);
}