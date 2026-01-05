#include<stdio.h>

 int leapyear();// declaration

int  main()
{    int res;

 res =	leapyear();//call
	if (res == 1)
	 {
	printf(" year is leap year\n");
	}	else{
		printf(" year is not leap year\n");
	}
	
}
int  leapyear()// definition
{
	int year;
	printf("enter the three digit number");
	scanf("%d",&year);
	     
	if((year %4 ==0 && year% 100!=0)||(year % 400 == 0))
    {
	  return 1;// leap year
	}	else{
	  return 0;// not leap year
	
	}
	
}
