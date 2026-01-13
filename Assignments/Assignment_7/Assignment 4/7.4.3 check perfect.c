#include <stdio.h>

void printPerfectNumbers(int*);   // declaration (Type-3)

int main()
{
    int n;

    printf("Enter number here: ");
    scanf("%d", &n);

    printPerfectNumbers(&n);   // function call

    return 0;
}

void printPerfectNumbers(int * n)   // definition
{
    int i, j, sum;

    printf("Perfect numbers between 1 and %d are:\n", n);

    for (i = 1; i <= * n; i++)
    {
        sum = 0;

        for (j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
                sum += j;
        }

        if (sum == i && i != 0)
            printf("%d ", i);
    }
}