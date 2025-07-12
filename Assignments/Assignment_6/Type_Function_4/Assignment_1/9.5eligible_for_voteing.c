#include<stdio.h>
 int eligibleOfVoteing(int age)
 {
 	if(age>=18)
 	return 1;
 	else
 	return 0;
 }
 
 


int main(){
	 int age;
	 
	 printf("enter the age");
	 scanf("%d",&age);
	 
	 if (eligibleOfVoteing(age))
	 printf("person is eligible to vote\n");
	  else
	 printf("person is note eligible to vote\n");
	 
	 return 0; 
}