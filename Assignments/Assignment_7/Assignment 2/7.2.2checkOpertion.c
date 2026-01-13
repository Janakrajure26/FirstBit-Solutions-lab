#include <stdio.h>


 void checkoperation (double* , double* , char*);// declaration

int main() {
    
    double n1, n2;
    char op;

    printf("Enter first number \n");
    scanf("%lf", &n1);

    printf("Enter second number \n");
    scanf("%lf", &n2);

    printf("Enter operator for desired operation \n");
    scanf(" %c", &op);
	 
    checkoperation (&n1,&n2, &op);
   //call function
 


}

void  checkoperation (double * n1, double * n2 , char * op)// defination
{
    double res  = 0;


    if (*op == '+')
    {
        res = *n1 + *n2;
    
    }
    else if (*op == '-')
    {
        res =  *n1 - *n2;

    }
    else if (*op == '*')
    {
        res = (*n1) * (*n2);
        
    }
    else if (*op == '/')
    {
       if (*n2 == 0)
     {
	    
       printf("division by zero is not allowed\n");
       
   }
      res = *n1 / *n2 ;
        
    }
    else
    {
        printf("This operator is not available right now.\n");
        
    
    }
    
      printf("Result = %0.2lf\n", res);


}
 
