#include<stdio.h>

int convertMinToHrs();   // declaration (Type-2)

int main()
{
    int hrs;

    hrs = convertMinToHrs();   // function call

    printf("Returned hours = %d\n", hrs);

    return 0;
}

int convertMinToHrs()   // definition
{
    int min = 250;
    int hrs;
    int temp = min;

    hrs = temp / 60;
    min = temp % 60;

    printf("Time of %d minutes is %d hrs and %d mins\n", temp, hrs, min);

    return hrs;   // ? returning ONE value
}