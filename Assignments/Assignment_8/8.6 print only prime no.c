#include <stdio.h>

int main()
{
    int n, i, j, isPrime;
    int arr[100];

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in the array are:\n");

    for (i = 0; i < n; i++)
    {
        if (arr[i] <= 1)
            continue;   // skip 0, 1, negative numbers

        isPrime = 1;    // assume number is prime

        for (j = 2; j <= arr[i] / 2; j++)
        {
            if (arr[i] % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}