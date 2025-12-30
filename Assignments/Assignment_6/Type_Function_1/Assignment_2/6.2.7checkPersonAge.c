#include<stdio.h>

 void checkPersonAge();// declaration
int main () {

checkPersonAge();// function call
	
}

void checkPersonAge()
{
  	int age ;
	printf("enter the age : \n");//definition
	scanf("%d", &age);

	if(age<12) {
		printf("person is child\n");
	} else if (age>=12 && age<=19) {
		printf("person is tenager\n");
	} else if(age>=20 && age<=59) {
		printf(" person is adult\n");
	} else  {
		printf("person is senior\n");
	}  
}