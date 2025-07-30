#include<stdio.h>
struct HR 
{
	int id;
	char name [20];
	int salary ;
	double commission ;
	
	
};

int main () 
{
	struct HR HR1 ,HR2;
	printf("enter the  detail of HR: 1\n");
	printf("enter id: ");
	scanf("%d",&HR1.id);
	printf("enter name: ");
	scanf("%s",HR1.name);
	printf("enter salary:");
	scanf("%d",&HR1.salary);
	printf("enter commission");
	scanf("%1f",&HR1.commission);
	
	
	printf("enter the  detail of HR: 1\n");
	printf("enter id: ");
	scanf("%d",&HR2.id);
	printf("enter name: ");
	scanf("%s",HR2.name);
	printf("enter salary:");
	scanf("%d",&HR2.salary);
	printf("enter commission");
	scanf("%1f",&HR2.commission);
	
	
	printf("information of HR1\n");
	
	printf("id %d \n",HR1.id);
	printf("name %s \n",HR1.name);
	printf("salary %d \n",HR1.salary);
	printf("commission %1f\n ",HR1. commission);
	
	printf("information of HR2\n");
	
	printf("id %d \n",HR2.id);
	printf("name %s \n",HR2.name);
	printf("salary %d \n",HR2.salary);
	printf("commission %1f\n ",HR2. commission);	
	
}