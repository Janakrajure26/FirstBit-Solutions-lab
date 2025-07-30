#include<stdio.h>
struct complex
{
	float real;
	float imaginary;
};
int main ()
{
	struct complex c;
	printf("enter real and imaginar\n");
	scanf("%f",&c.real);
	scanf("%f",&c.imaginary);
	
	printf("%f real %f imaginar", c.real, c.imaginary);
	
}