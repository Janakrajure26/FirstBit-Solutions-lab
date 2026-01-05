#include<stdio.h>

float areaOfRectangle();   // declaration (Type-2)

int main()
{
    float res;

    res = areaOfRectangle();   // function call

    printf("Area of rectangle is %.2f\n", res);

    return 0;
}

float areaOfRectangle()   // definition
{
    float length = 7.8;
    float width  = 9.0;
    float area;

    area = length * width;

    printf("Length = %.2f, Width = %.2f\n", length, width);

    return area;   // ? returning value
}