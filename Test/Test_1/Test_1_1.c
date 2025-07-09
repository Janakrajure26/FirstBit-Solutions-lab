#include<stdio.h>
int main ()
{
  int hours,minut,sec,totalsec;
  
  printf("enter hours");
  scanf("%d",& hours);
  printf("enter minut");
  scanf("%d",& minut);
  printf("%d", & sec);
  scanf("%d",& sec);
  
  
   totalsec=(hours*3600)+(minut* 60)+sec;
   
   printf("totalsec = %d\n", totalsec);
   
}