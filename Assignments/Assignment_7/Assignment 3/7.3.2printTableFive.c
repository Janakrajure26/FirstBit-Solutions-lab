#include<stdio.h>

void tableOfFive(int*);// declaration

int main ()
{   

 int num = 5;
    tableOfFive(&num); // call


}
void tableOfFive(int * n)// definition
{
    int i;
	for(i=1;i<=10;i++){
		printf("5*%d = %d\n",i,(*n)*i);
	}
	
}
