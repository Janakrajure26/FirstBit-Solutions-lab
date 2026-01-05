#include<stdio.h>

float areaOfTriangle();   // declaration (Type-2)

int main()
{
    float res;

    res = areaOfTriangle();   // function call

    printf("Area of triangle is %.2f\n", res);

    return 0;
}

float areaOfTriangle()   // definition
{
    float height = 8.5;
    float base = 6;
    float area;

    area = (height * base) / 2;

    return area;   // ? return value
}