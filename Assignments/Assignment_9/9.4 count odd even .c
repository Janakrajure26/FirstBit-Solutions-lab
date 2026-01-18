#include <stdio.h>

/* Type-4 function declarations */
int printEven(int arr[], int n);
int printOdd(int arr[], int n);

int main()
{
    int n, i;
    int array[100];
    int evenCount, oddCount;

    printf("Enter number of elements:\n");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    evenCount = printEven(array, n);
    oddCount  = printOdd(array, n);

    printf("\nTotal even numbers = %d\n", evenCount);
    printf("Total odd numbers = %d\n", oddCount);

    return 0;
}


int printEven(int arr[], int n)
{
    int i, count = 0;

    printf("Even numbers in array:\n");
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
            count++;
        }
    }
    printf("\n");

    return count;
}



int printOdd(int arr[], int n)
{
    int i, count = 0;

    printf("Odd numbers in array:\n");
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%d ", arr[i]);
            count++;
        }
    }
    printf("\n");

    return count;
}