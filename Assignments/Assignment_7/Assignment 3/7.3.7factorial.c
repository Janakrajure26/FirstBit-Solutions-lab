#include <stdio.h>

void printFactorialOfNo(int*);   // declaration (Type-2)

int main()


{
	
	int n;
     printf("Enter number: ");
      scanf("%d", &n);
      
     printFactorialOfNo(&n);   // function call

    

    return 0;
}

void printFactorialOfNo(int* n)   // definition
{
    int  fac = 1;

    while (*n >= 1)
    {
        fac = fac * (*n);
        n--;
    }

    printf("The factorial of number is %d\n", fac);
}