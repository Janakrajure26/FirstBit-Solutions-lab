#include<stdio.h>

int addFirstandLast(int*);   // declaration (Type-2)

int main()
{
	int n;
     printf("enter the number: ");
    scanf("%d", &n);

    addFirstandLast(&n);   // function call

    


}

int addFirstandLast(int * n)   // definition
{
    int first, last;

   

    last = *n % 10;
    first = *n;

    while(first >= 10)
    {
        first /= 10;
    }

     printf("sum of first and last number = %d\n", first + last);   // ? return value
}