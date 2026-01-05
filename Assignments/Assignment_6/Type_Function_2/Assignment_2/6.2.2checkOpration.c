#include <stdio.h>


 double checkoperation ();// declaration

int main() {
    double res ; 
	 
    
  res = checkoperation (); //call function
 
  printf("Result = %0.2lf\n", res);

}

double  checkoperation ()// defination
{
    double n1, n2;
    char op;

    printf("Enter first number \n");
    scanf("%lf", &n1);

    printf("Enter second number \n");
    scanf("%lf", &n2);

    printf("Enter operator for desired operation \n");
    scanf(" %c", &op);


    if (op == '+')
    {
        return  n1 + n2;
    
    }
    else if (op == '-')
    {
        return  n1 - n2;

    }
    else if (op == '*')
    {
        return  n1 * n2;
        
    }
    else if (op == '/')
    {
        return  n1 / n2;
    
    }
    else if (op == '%')
    {
        return  (int)(n1) % (int)(n2);
        
    }
    else
    {
        printf("This operator is not available right now.\n");
        
        return 0 ;
    }


}
 
