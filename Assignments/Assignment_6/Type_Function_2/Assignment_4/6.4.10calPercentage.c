#include<stdio.h>

float calculatePercentage();   // declaration (Type-2)

int main()
{
    float percentage;

    percentage = calculatePercentage();   // function call

    printf("Total Percentage = %.2f %%\n", percentage);

    return 0;
}

float calculatePercentage()   // definition
{
    float english, hindi, maths, science, socialscience;
    float total, percentage;

    printf("Enter the student's marks for all subjects\n");

    printf("English: ");
    scanf("%f", &english);

    printf("Hindi: ");
    scanf("%f", &hindi);

    printf("Maths: ");
    scanf("%f", &maths);

    printf("Science: ");
    scanf("%f", &science);

    printf("Social Science: ");
    scanf("%f", &socialscience);

    total = english + hindi + maths + science + socialscience;
    percentage = (total * 100) / 500;

    printf("Total Marks = %.2f / 500\n", total);

    return percentage;   // ? returning ONE value
}