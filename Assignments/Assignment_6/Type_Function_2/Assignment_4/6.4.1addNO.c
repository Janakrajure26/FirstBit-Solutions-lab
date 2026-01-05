#include<stdio.h>

int addNumbers();   // declaration (Type-2)

int main()
{
    int res;

    res = addNumbers();   // function call

    printf("the sum is %d\n", res);

    return 0;
}

int addNumbers()   // definition
{
    int num1 = 40;
    int num2 = 30;
    int sum;

    sum = num1 + num2;

    return sum;    // returning value
}