#include<stdio.h>
int main (){
	int  min ,hrs;
	
	min = 250;
	
	int temp= min;
	hrs = temp / 60;
	min = temp % 60;
	
	printf("time of %d min into hrs is : %d hrs and %d mins", temp, hrs, min);
	
}