#include<stdio.h>

int checkNoStrong();   // declaration 

int main()
{
    int res;

    res = checkNoStrong();   // function call

    if(res == 1)
        printf("number is strong\n");
    else
        printf("number is not strong\n");

    return 0;
}

int checkNoStrong()   // definition
{
    int n, temp, digit, sum = 0;

    printf("enter the number: ");
    scanf("%d", &n);

    temp = n;

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

    if(sum == n)
        return 1;   // strong
    else
        return 0;   // not strong
}