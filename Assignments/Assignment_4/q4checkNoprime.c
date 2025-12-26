// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    int flag = 0;
    int i ;
    
    printf("enter the number");
    scanf("%d",&n);
    
    for(i=2;i<n;i++)
    {
        if (n%i== 0)
       {
        flag = 1;
        break;
       }
    
    }
    
    if(flag ==0)
    printf("%d is prime", n);
    else
    printf("%d is not prime",n);
}