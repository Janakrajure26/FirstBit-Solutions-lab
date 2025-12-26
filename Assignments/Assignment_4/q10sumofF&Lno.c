#include <stdio.h>
int main() {
    
int n = 12345;
int last , first ;
last = n % 10;


for( ;n>=10; )
{
    n  = n/10;
}
first = n;
printf("sum of f and l si =  %d", first + last);

}