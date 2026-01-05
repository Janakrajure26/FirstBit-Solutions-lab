#include <stdio.h>
#define PI 3.14159

double areaOfCircle();   // declaration (Type-2)

int main()
{
    double res;

    res = areaOfCircle();   // function call

    printf("Area of circle: %.2f\n", res);

    return 0;
}

double areaOfCircle()   // definition
{
    double radius = 9.0;
    double area;

    area = PI * radius * radius;

    printf("Radius: %.2f\n", radius);

    return area;   // ? returning value
}