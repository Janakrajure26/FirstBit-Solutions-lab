#include <stdio.h>

int main()
{
    double n1, n2;
    char op;

    printf("Enter first number \n");
    scanf("%lf", &n1);

    printf("Enter second number \n");
    scanf("%lf", &n2);

    printf("Enter operator for desired operation \n");
    scanf(" %c", &op);

    double result;

    if (op == '+')
    {
        result = n1 + n2;
        printf("Result = %0.2lf\n", result);
    }
    else if (op == '-')
    {
        result = n1 - n2;
        printf("Result = %0.2lf\n", result);
    }
    else if (op == '*')
    {
        result = n1 * n2;
        printf("Result = %0.2lf\n", result);
    }
    else if (op == '/')
    {
        result = n1 / n2;
        printf("Result = %0.2lf\n", result);
    }
    else if (op == '%')
    {
        result = (int)(n1) % (int)(n2);
        printf("Result = %0.2lf\n", result);
    }
    else
    {
        printf("This operator is not available right now.\n");
    }

    return 0;
}