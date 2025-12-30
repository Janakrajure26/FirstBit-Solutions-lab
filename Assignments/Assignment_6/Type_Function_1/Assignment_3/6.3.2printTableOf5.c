#include<stdio.h>

void tableOfFive();// declaration

int main ()
{
     tableOfFive(); // call


}
void tableOfFive()// definition
{
    int i;
	for(i=1;i<=10;i++){
		printf("5*%d = %d\n",i,5*i);
	}
}
