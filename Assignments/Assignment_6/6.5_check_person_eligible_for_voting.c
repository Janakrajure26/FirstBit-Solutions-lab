#include<stdio.h>
void person_eligible_for_voteing();
void main ()
{
	person_eligible_for_voteing();
	
}

void person_eligible_for_voteing()
{
	 int age;
	 
	 printf("enter the age");
	 scanf("%d",&age);
	 
	 if (age>=18)
	 printf("person is eligible to vote\n");
	  else
	 printf("person is note eligible to vote\n");
}