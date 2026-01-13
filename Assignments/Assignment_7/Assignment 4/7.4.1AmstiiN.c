#include <stdio.h>

void printArmstrong(int*);   // declaration (Type-3)

int main()
{
    int n;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printArmstrong(&n);   // function call

    return 0;
}

void printArmstrong(int * n)   // definition
{
    int i;

    printf("Armstrong numbers from 1 to %d are:\n", n);

    for (i = 1; i <= *n; i++)
    {
        int temp = i, sum = 0, digit, count = 0;
        int t = temp;

        // count digits
        while (t > 0)
        {
            count++;
            t /= 10;
        }

        t = temp;

        // calculate Armstrong sum
        while (t > 0)
        {
            digit = t % 10;

            int power = 1;
            for (int j = 1; j <= count; j++)
            {
                power *= digit;
            }

            sum += power;
            t /= 10;
        }

        if (sum == i)
            printf("%d ", i);
    }
}