#include<stdio.h>

int checkNoIsPalindrome();   // declaration (Type-2)

int main()
{
    int res;

    res = checkNoIsPalindrome();   // function call

    if(res == 1)
        printf("Palindrome Number\n");
    else
        printf("Not a Palindrome Number\n");

    return 0;
}

int checkNoIsPalindrome()   // definition
{
    int n;

    printf("Enter your number: ");
    scanf("%d", &n);

    if(n < 0)
        return 0;   // negative numbers are not palindrome

    int temp = n;
    int rev = 0;

    while(temp > 0)
    {
        int ld = temp % 10;
        rev = (rev * 10) + ld;
        temp = temp / 10;
    }

    if(rev == n)
        return 1;   // palindrome
    else
        return 0;   // not palindrome
}