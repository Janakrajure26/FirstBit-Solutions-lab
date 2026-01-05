#include <stdio.h>
int print1To10(); // declaration
int main() {
    int res;
   res = print1To10();// call
    
    printf("resturned value = %d", res);
    
}

int print1To10() // definition
{
    	for (int i=1; i<=10;i++){
		printf("%d", i);
    	}
    	return 10;
}