#include <stdio.h>

void main (){
	float celsius , fahrenheit;
	// ask the user to enter the temp in clesius 
	printf (" enter temp in clesius ");
	scanf ("%f", & celsius);
	fahrenheit = (celsius)+32;//convert celsius to fahrenheit formula 
	printf("%.2f celsius is equal to %.2f fahrenheit\n",celsius, fahrenheit);
}