#include<stdio.h>

float checkBasicSalary(float salary)
 
 {
 	if(salary <=5000 )
 	
 	return 1;
 	
 	else
 	return 0;
 		
	 
 }
int main (){
	float   basic, da, ta ,hra, total;
	
   printf("enter the basic salary\n");
   scanf("%f", & basic);
   
   if ( checkBasicSalary(basic))
   {
   	da =  basic * 0.10;
   	ta = basic * 0.20;
   	hra = basic * 0.25;
   	
   } else{
   	
   	da = basic *0.15;
   	ta = basic * 0.25;
   	hra = basic * 0.30;
   }
   total =  basic+da+ta+hra;
   printf("total salary =%.2f\n",total);
   
   return 0;
}