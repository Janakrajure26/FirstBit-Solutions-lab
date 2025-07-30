#include<stdio.h>
struct time 
{
	int hour;
	int min ;
	int sec;
	
};

int main ()
{
	struct time t;
	
	printf("enter the hour  min  sec\n");
	scanf("%d",&t.hour);
	scanf("%d",&t.min);
	scanf("%d",&t.sec);
	
	printf("hour =%d  min =%d  sec =%d", t.hour,t.min, t.sec);
	
	return 0;
}