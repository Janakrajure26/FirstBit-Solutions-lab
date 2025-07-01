#include<stdio.h>
int main (){
	int num1 = 20;
	int num2 = 40;
	 int num3 = 60;
	  int num4 =80;
	   int num5= 100;  
	   
	    int sum ;
	    float average;
	    sum = num1 + num2+ num3 + num4 + num5; 
	    average = (float)sum/5;
	    
	    printf("number %d, %d, %d, %d, %d\n", num1, num2 ,num3, num4, num5);
	    printf("sum%d\n", sum);
	    printf("average %2f\n", average);
	 
}