#include<stdio.h>

 void leapyear();

void main()
{
	leapyear();
}
void leapyear()
{
	int year;
	printf("enter the three digit number");
	scanf("%d",&year);
	
	if((year %4 ==0 && year% 100!=0)||(year % 400 == 0))
    {
	printf("%d year is leap year\n", year);
	}	else{
		printf("%d year is not leap year\n",year);
	}
	
}
