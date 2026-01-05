#include<stdio.h>
float convertTemp();

int main (){
	float res;
	res = convertTemp();
	printf("convert temperature to fahrenheit is %.2f\n", res);
}

float convertTemp()
{
	float c ,f;
	c=53;
	
	f= (c*9/5)+32;
	
	
	
	return f ;
}