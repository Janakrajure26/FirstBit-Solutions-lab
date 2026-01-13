#include<stdio.h>

void checkNoIsPerfect(int*);   // declaration

int main()
{
	int n;
    printf("enter any number: ");
    scanf("%d", &n);
  checkNoIsPerfect(&n);   // function call

}

void checkNoIsPerfect(int* n)   // definition
{
    int  i = 1, sum = 0;

    

    while(i < *n)
    {
        if(*n % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }

    if(sum == *n)
        printf("number is perfect\n"); 
    else
         printf("number is not perfect\n");  
}