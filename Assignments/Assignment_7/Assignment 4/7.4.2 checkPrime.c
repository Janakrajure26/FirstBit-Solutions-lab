#include <stdio.h>

void printPrime(int*);   // declaration (Type-3)

int main()
{
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printPrime(&n);   // function call

    return 0;
}

void printPrime(int * n)   // definition
{
    int i, j, flag;

    printf("Prime numbers between 1 and %d are:\n", n);

    for (i = 2; i <= *n; i++)
    {
        flag = 1;

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
            printf("%d ", i);
    }
}