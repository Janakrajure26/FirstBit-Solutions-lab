#include <stdio.h>

int printFactorialOfNo();   // declaration (Type-2)

int main()
{
    int res;

    res = printFactorialOfNo();   // function call

    printf("The factorial of number is %d\n", res);

    return 0;
}

int printFactorialOfNo()   // definition
{
    int n, fac = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    while (n >= 1)
    {
        fac = fac * n;
        n--;
    }

    return fac;  
}