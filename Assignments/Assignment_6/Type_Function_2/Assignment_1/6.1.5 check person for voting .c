#include<stdio.h>
int person_eligible_for_voteing(); // declaration

int main ()
{    int res ;
 res = person_eligible_for_voteing();
	
		 if (res == 1)
	 printf("person is eligible to vote\n");
	  else
	 printf("person is note eligible to vote\n");// call
	
}

int person_eligible_for_voteing()
{
	 int age;
	 
	 printf("enter the age");// definition
	 scanf("%d",&age);
	 
	 if (age>=18)
	 return 1;
	  else
	 return 0;
}