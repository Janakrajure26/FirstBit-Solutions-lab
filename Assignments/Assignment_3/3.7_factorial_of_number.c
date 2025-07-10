#include <stdio.h>

int main()
{
    int n;

    printf("Enter number ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    int fac = 1;

    if (n == 0)
    {
        printf("Factorial of zero is %d\n", fac);
        return 0;
    }
    while (n >= 1)
    {
        fac = fac * n;
        n--;
    }

    printf("The factorial of number is %d", fac);
    return 0;
}