#include<stdio.h>

 void leapyear(int*);// declaration

int  main()
{   
     int year;
   	printf("enter the three digit number\n");
	scanf("%d",&year);

    leapyear(&year);//call
	
	
}
void  leapyear(int * year)// definition
{
	
	     
	if((*year %4 ==0 && *year % 100!=0)||(*year % 400 == 0))
     {
	printf(" year is leap year\n");
	}	else{
		printf(" year is not leap year\n");
	}
}
