#include<stdio.h>

int isleapyear(int year)
{
	if ((year % 4 == 0 && year % 100 != 0)||( year % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main ()
{
	int year;
	printf("enter the year");
	scanf("%d",& year);
	
	if( isleapyear(year))
	{
		printf("%d year is leap\n", year);
	}
	else
	{
		printf("%d year is not leap\n", year);
	}
	return 0;
}
    
   