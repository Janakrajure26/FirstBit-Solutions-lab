#include<stdio.h>

int tableOfFive();// declaration

int main ()
{   int res;
    res = tableOfFive(); // call
 printf("resturned value %d", res);

}
int tableOfFive()// definition
{
    int i;
	for(i=1;i<=10;i++){
		printf("5*%d = %d\n",i,5*i);
	}
	return 50;
}
