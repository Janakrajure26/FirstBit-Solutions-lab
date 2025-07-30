#include<stdio.h>
struct date 
{
	int date ;
	int month ;
	int  year ;
	
};
int main ()
{
	struct date d;
	printf("enter date month and year");
    scanf("%d",&d . date);
    scanf("%d",&d.month);
    scanf("%d",& d.year);
    
    printf(" enter the date = %d  month = %d  year =%d", d .date ,d.month,d.year );

return 0;
}


