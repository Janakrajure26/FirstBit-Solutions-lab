#include  <stdio.h>
#define PI 3.14159


int main (){
	double radius = 9.0;
	
	double area ;
	
	area = PI * radius * radius;
	printf("radius:%.2f\n",radius);
	printf("area of circle:%.2f\n",area);
	
	return 0;
}