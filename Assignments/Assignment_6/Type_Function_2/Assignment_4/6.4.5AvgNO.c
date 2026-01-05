#include<stdio.h>

float calculateAverage();   // declaration (Type-2)

int main()
{
    float avg;

    avg = calculateAverage();   // function call

    printf("Average = %.2f\n", avg);

    return 0;
}

float calculateAverage()   // definition
{
    int num1 = 20;
    int num2 = 40;
    int num3 = 60;
    int num4 = 80;
    int num5 = 100;

    int sum;
    float average;

    sum = num1 + num2 + num3 + num4 + num5;
    average = (float)sum / 5;

    printf("Numbers: %d, %d, %d, %d, %d\n",
           num1, num2, num3, num4, num5);
    printf("Sum = %d\n", sum);

    return average;   // ? returning value
}