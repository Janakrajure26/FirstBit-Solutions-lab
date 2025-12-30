#include <stdio.h>
void print1To10(); // declaration
int main() {
    
    print1To10();// call
    
}

void print1To10() // definition
{
    	for (int i=1; i<=10;i++){
		printf("%d", i);
    	}
}