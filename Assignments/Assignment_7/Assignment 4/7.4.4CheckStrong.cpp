#include <stdio.h>

void printStrongNumbers(int*);   // declaration (Type-3)

int main()
{
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printStrongNumbers(&n);   // function call

    return 0;
}

void printStrongNumbers(int * n)   // definition
{
    int i;

    printf("Strong numbers between 1 and %d are:\n", *n);

    for (i = 1; i <= *n; i++)
    {
        int temp = i, sum = 0;

        while (temp > 0)
        {
            int digit = temp % 10;
            int fact = 1;

            for (int j = 1; j <= digit; j++)
            {
                fact *= j;
            }

            sum += fact;
            temp /= 10;
        }

        if (sum == i)
            printf("%d ", i);
    }
}