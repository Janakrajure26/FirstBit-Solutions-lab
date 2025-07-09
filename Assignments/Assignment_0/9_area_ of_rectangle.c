#include<stdio.h>
int main (){
	
	float length = 7.8;
	float width  = 9;
	float area;
	
	area = length * width ;
	printf("area of rectangle with length %02f and width %0.2f is:%0.2f\n",length, width,area);
	return 0;
}