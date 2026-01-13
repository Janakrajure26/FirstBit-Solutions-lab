#include<stdio.h>
int main()
{
    int n, choice;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\n----- MENU -----\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Find Sum of Digits\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            checkEvenOdd(*n);
            break;

        case 2:
            checkPrime(*n);
            break;

        case 3:
            checkPalindrome(*n);
            break;

        case 4:
            checkSign(*n);
            break;

        case 5:
            reverseNumber(*n);
            break;

        case 6:
            sumOfDigits(*n);
            break;

        default:
            printf("Invalid Choice\n");
    }

    return 0;
}

/* Function definitions */

void checkEvenOdd(int * n)
{
    if (*n % 2 == 0)
        printf("Number is Even\n");
    else
        printf("Number is Odd\n");
}

void checkPrime(int  *n)
{
    int i, flag = 1;

    if (*n <= 1)
        flag = 0;
    else
    {
        for (i = 2; i <= * n / 2; i++)
        {
            if ( *n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
        printf("Number is Prime\n");
    else
        printf("Number is Not Prime\n");
}

void checkPalindrome(int * n)
{
    int temp = *n, rev = 0;

    while (temp > 0)
    {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    if (rev == *n)
        printf("Number is Palindrome\n");
    else
        printf("Number is Not Palindrome\n");
}

void checkSign(int * n)
{
    if (n > 0)
        printf("Number is Positive\n");
    else if (*n < 0)
        printf("Number is Negative\n");
    else
        printf("Number is Zero\n");
}

void reverseNumber(int * n)
{
    int temp = *n, rev = 0;

    while (temp != 0)
    {
        rev = rev * 10 + (temp % 10);
        temp /= 10;
    }

    printf("Reverse of number is: %d\n", rev);
}

void sumOfDigits(int * n)
{
    int temp = *n, sum = 0;

    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }

    printf("Sum of digits is: %d\n", sum);
}
