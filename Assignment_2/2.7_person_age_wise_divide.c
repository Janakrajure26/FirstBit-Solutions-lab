#include<stdio.h>
int main () {
	int age ;
	printf("enter the age : \n");
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

	return 0;




































}