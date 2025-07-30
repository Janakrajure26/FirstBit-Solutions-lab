#include<stdio.h>
struct distance
{
 int feet;
 float inch ;	
};
int main ()
{
	struct distance d;
	
	printf("enter feet inch \n");
	scanf("%d",&d.feet);
	scanf("%f",&d.inch);
	
	printf("enter distance %d feet %.2f inch",d .feet, d.inch);
}