#include<stdio.h>
struct admin {
	int id;
	char name[20];
	float salary ;
	 int allowance;
};   

int main ()
{
	struct admin A1, A2 ;
	
	printf("enter the id :\n");
	scanf("%d",&A1.id);
	printf("enter the name :\n");
	scanf("%s",&A1.name);
	printf("enter salary :\n");
	scanf("%f",&A1.salary);
	printf("enter allowance:\n");
	scanf("%d",&A1.allowance);
	
		printf("enter the id :\n");
	scanf("%d",&A2.id);
	printf("enter the name :\n");
	scanf("%s",&A2.name);
	printf("enter salary :\n");
	scanf("%f",&A2.salary);
	printf("enter allowance:\n");
	scanf("%d",&A2.allowance);
	
	
	printf("admin A1 details:\n");
	printf("%d \n",A1.id);
	printf("%s\n",A1.name);
	printf("%0.2f \n",A1.salary);
	printf("%d \n",A1.allowance);
	
		printf("admin A2 details :\n");
	printf("%d\n",A2.id);
	printf("%s\n",A2.name);
	printf("%0.2f\n",A2.salary);
	printf("%d \n",A2.allowance);
	
}