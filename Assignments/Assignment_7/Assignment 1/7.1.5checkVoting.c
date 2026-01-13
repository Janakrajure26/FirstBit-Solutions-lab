#include<stdio.h>
void person_eligible_for_voteing(int*); // declaration

int main ()
{   

  	int age;
	 
	 printf("enter the age");// call
	 
	 scanf("%d",&age);
	 
  person_eligible_for_voteing(&age);
	
	

	
}

void person_eligible_for_voteing(int  *age  )
{
	 
	 
	 if (*age>=18)
	 
	  printf("person is eligible to vote\n");// definition
	  else
	 printf("person is note eligible to vote\n");
	
}