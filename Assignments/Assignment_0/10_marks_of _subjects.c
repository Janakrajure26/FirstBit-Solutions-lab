#include<stdio.h>
int main ()
{
	float english, hindi ,maths, science,socialscience;
	
	printf("enter the students marks for all subjects\n");
	
	printf("english");
	scanf("%f", &english);
	
	printf("hindi");
	scanf("%f",& hindi);
	
	printf("maths");
	scanf("%f",& maths);
	
	printf("science");
	scanf("%f", & science);
	
	printf("socislscience");
	scanf("%f",&socialscience);
	
	float total = english+ hindi+ maths+science+socialscience;
	
	float percentage = (total*100 )/500;
	printf("total marks %2f/500\n", total);
	printf("total percentage %2f %%\n",percentage);
	
}