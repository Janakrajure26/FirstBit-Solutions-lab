#include<stdio.h>

int checkNoIsPerfect();   // declaration

int main()
{
    int res;

    res = checkNoIsPerfect();   // function call

    if(res == 1)
        printf("number is perfect\n");
    else
        printf("number is not perfect\n");

    return 0;
}

int checkNoIsPerfect()   // definition
{
    int n, i = 1, sum = 0;

    printf("enter any number: ");
    scanf("%d", &n);

    while(i < n)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
        i++;
    }

    if(sum == n)
        return 1;  
    else
        return 0;   
}