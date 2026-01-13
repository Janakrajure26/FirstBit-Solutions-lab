#include<stdio.h>
void salary_calculation(float*);

int  main ()
{
   
	
  float  basic ;
	
   printf("enter the basic salary");
   scanf("%f", &basic);
  
   salary_calculation(&basic);
	
}
void  salary_calculation (float * basic )

{
	 float da, ta ,hra, total;
   
   if (*basic >= 5000)
   {
   	da =  *basic * 0.10;
   	ta = *basic * 0.20;
   	hra = *basic * 0.25;
   	
   } else{
   	
   	da = *basic *0.15;
   	ta = *basic * 0.25;
   	hra = *basic * 0.30;
   }
   total = *basic+ da+ta+hra;
   
   printf("total salary =%.2f\n", total);
   
   
    
}