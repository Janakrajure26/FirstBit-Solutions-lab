#include<stdio.h>
 struct employee 
 {
 	int id ;
 	char name [20] ;
 	 float salary; 
 };
 
 int  main ()
 {
 	struct employee e1, e2 ,e3 ;
 	
 	printf("enter the emp id : ");
 	scanf("%d",& e1.id);
 	printf("enter name : ");
 	scanf("%s",&e1. name);
 	printf("enter salary : ");
 	scanf("%f",&e1. salary);
 	
 	
 	printf("enter the emp id : ");
 	scanf("%d",&e2.id);
 	printf("enter name : ");
 	scanf("%s",&e2. name);
 	printf("enter salary : ");
 	scanf("%f",&e2. salary);
 	
 		printf("enter the emp id : ");
 	scanf("%d",&e3.id);
 	printf("enter name : ");
 	scanf("%s",&e3. name);
 	printf("enter salary : ");
 	scanf("%f",&e3. salary);
 	
 	printf("emp 1\n");
 	printf("emp id %d\n", e1.id);
 	printf("name %s \n", e1. name);
 	printf("salary%2.f\n ", e1. salary);
 	
 	printf("emp 2\n");
 	printf("emp id %d\n", e2.id);
 	printf("name %s \n", e2. name);
 	printf("salary%2.f\n ", e2. salary);
 	
 	printf("emp 3\n");
 	printf("emp id %d\n", e3.id);
 	printf("name %s \n", e3. name);
 	printf("salary%2.f\n ", e3. salary);
 }