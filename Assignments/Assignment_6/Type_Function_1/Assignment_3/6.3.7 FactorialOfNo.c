#include <stdio.h>
void printFactorialOfNo();
int main()
{
  
   printFactorialOfNo();
    
}
void printFactorialOfNo()
{
	  int n, fac = 1 ;

    printf("Enter number ");
    scanf("%d", &n);

 
    while (n >= 1)
    {
        fac = fac * n;
        n--;
    }

    printf("The factorial of number is %d", fac);
}
