#include<stdio.h>

 int checkPersonAge();// declaration
int main () {
 int res ;
res = checkPersonAge();// function call

if(res == 1) {
		printf("person is child\n");
	} else if (res == 2) {
		printf("person is tenager\n");
	} else if(res == 3) {
		printf(" person is adult\n");
	} else  {
		printf("person is senior\n");
	} 
	
}

int checkPersonAge()
{
  	int age ;
	printf("enter the age : \n");//definition
	scanf("%d", &age);

	if(age<12) {
		return 1;
	} else if (age>=12 && age<=19) {
		return 2;
	} else if(age>=20 && age<=59) {
		return 3;
	} else  {
		return 4;
	}  
}