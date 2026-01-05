#include<stdio.h>

int addFirstandLast();   // declaration (Type-2)

int main()
{
    int res;

    res = addFirstandLast();   // function call

    printf("sum of first and last number = %d\n", res);

    return 0;
}

int addFirstandLast()   // definition
{
    int n, first, last;

    printf("enter the number: ");
    scanf("%d", &n);

    last = n % 10;
    first = n;

    while(first >= 10)
    {
        first /= 10;
    }

    return first + last;   // ? return value
}