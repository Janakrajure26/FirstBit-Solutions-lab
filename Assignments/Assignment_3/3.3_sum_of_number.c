#include <stdio.h>

int main()
{
   int start, end , sum = 0 ;
   
   printf("enter the start number :");
   scanf("%d",&start);
   
   printf("enter the end number:");
   scanf("%d",&end);
   
   
   
   int i = start ;
   while(i<= end)
{
	sum = sum +i ;
	i++;
}
 printf ("sum from %d to %d is %d \n ",sum );
 
 return 0;

}