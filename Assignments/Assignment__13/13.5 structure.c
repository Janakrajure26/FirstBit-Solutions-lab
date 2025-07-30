#include<stdio.h>
 struct salesmanger 
 {
 int id;
 char name[20];
 int salary;
  double incentive;
   int target;
 	
 };
 
 int main ()
 {
 	struct salesmanger sm1, sm2;
 	
 	printf("enter sales manager  sm1 details\n");
 	
 	printf("enter id :");
 	scanf(" %d",& sm1 .id);
 	printf("enter name: ");
 	scanf(" %s", sm1.name);
 	printf("enter salary :");
 	scanf("%d",&sm1.salary);
 	printf(" enter incentive:");
 	scanf("%lf", & sm1.incentive);
 	printf("enter target:");
 	scanf("%d",&sm1. target);
 	
 		printf("enter sales manager  sm2 details\n");
 	
 	printf("enter id :");
 	scanf(" %d",& sm2 .id);
 	printf("enter name: ");
 	scanf(" %s", sm2.name);
 	printf("enter salary :");
 	scanf(" %d",&sm2.salary);
 	printf(" enter incentive:");
 	scanf(" %lf", & sm2.incentive);
 	printf("enter target:");
 	scanf(" %d",&sm2. target);
 	
 	printf("\n sale manger sm1\n");
 	printf("id %d \n",sm1. id);
 	printf(" name %s \n", sm1.name);
 	printf(" salary %d\n", sm1. salary);
 	printf("incentive %lf\n", sm1.incentive);
 	printf("target %d \n", sm1. target);
 	
 	 	printf("\n sale manger sm2\n");
 	printf("id %d \n",sm2. id);
 	printf(" name %s \n", sm2.name);
 	printf(" salary %d\n", sm2. salary);
 	printf("incentive %lf\n", sm2.incentive);
 	printf("target %d \n", sm2. target);
 	
 	return 0;
 }