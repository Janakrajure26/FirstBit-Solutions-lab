#include <stdio.h>
void  print1To10(int*); // declaration
int main() {
	
	int num = 10;
     print1To10(&num);// call
    

    
}

void print1To10(int * n) // definition
{
    	for (int i=1; i<=*n;i++){
		printf("%d \n", i);
    	}
    	  
}