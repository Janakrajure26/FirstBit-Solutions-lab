#include<stdio.h>

void checkNoIsPalindrome(int*);   // declaration (Type-2)

int main()
{
    
	 int n;

    printf("Enter your number: ");
    scanf("%d", &n);
    
	checkNoIsPalindrome(&n);   // function call


}

void checkNoIsPalindrome(int * n)   // definition
{
   int id ;

    if(*n < 0)
    
       printf("not a palindrome no\n");
       
        return ;   // negative numbers are not palindrome

    int temp = *n;
    int rev = 0;

    while(temp > 0)
    {
        int ld = temp % 10;
        rev = (rev * 10) + ld;
        temp = temp / 10;
    }

    if(rev == *n)
          printf("Palindrome Number\n");   // palindrome
    else
          printf("Not a Palindrome Number\n");  // not palindrome
}