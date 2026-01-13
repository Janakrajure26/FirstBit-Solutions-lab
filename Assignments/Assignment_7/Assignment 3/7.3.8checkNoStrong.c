#include<stdio.h>

void checkNoStrong(int*);   // declaration 

int main()

{   
    int n ;
    printf("enter the number: ");
    scanf("%d", &n);

     checkNoStrong(&n);   // function call

    
     


}

void checkNoStrong(int * n)   // definition
{
    int  temp, digit, sum = 0;



    temp = *n;

    while(temp > 0)
    {
        digit = temp % 10;

        int fact = 1;
        for(int i = 1; i <= digit; i++)
        {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if(sum == *n)
        printf("number is strong\n");  // strong
    else
         printf("number is not strong\n");  // not strong
}