#include<stdio.h>

int squareOfNumber();   // declaration (Type-2)

int main()
{
    int res;

    res = squareOfNumber();   // function call

    printf("Returned square = %d\n", res);

    return 0;
}

int squareOfNumber()   // definition
{
    int n = 8;
    int s, c;

    s = n * n;
    c = n * n * n;

    printf("number = %d\n", n);
    printf("square = %d\n", s);
    printf("cube = %d\n", c);

    return s;   // ? returning ONE value
}