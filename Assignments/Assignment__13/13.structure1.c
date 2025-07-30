#include<stdio.h>
 struct student
 {
 	int rollno;
 	char name[20] ;
 	float marks;
 };
 
 int main ()
 {
 	struct student s1 , s2 , s3;
 	
 	printf("enter roll number:");
 	scanf("%d",&s1. rollno);
 	
 	printf("enter name:");
 	scanf("%s",&s1. name);
 	
 	printf("enter marks:");
 	scanf("%d",&s1. marks);
 	
 	
 	
 	
 	printf("enter roll number:");
 	scanf("%d",&s2. rollno);
 	
 	printf("enter name:");
 	scanf("%s",&s2. name);
 	
 	printf("enter marks:");
 	scanf("%d",&s2. marks);
 	
 	
 	printf("enter roll number:");
 	scanf("%d",&s3. rollno);
 	
 	printf("enter name:");
 	scanf("%s",&s3. name);
 	
 	printf("enter marks:");
 	scanf("%d",&s3. marks);
 	
 	printf("student 1\n");
 	printf("rollno number %d \n", s1.rollno);
 	printf(" name %s \n", s1 .name);
 	printf("marks %d \n", s1.marks);
 	
 	printf(" student 2\n");
 	printf("rollno number %d \n", s2.rollno);
 	printf(" name %s \n", s2.name);
 	printf("marks %d \n", s2.marks);
 	
 		printf("student 3\n");
 	printf("rollno number %d \n", s3.rollno);
 	printf(" name %s \n", s3 .name);
 	printf("marks %d \n", s3.marks);
 }
 