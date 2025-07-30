#include<stdio.h>
struct product 
{
	int id;
	char name[20];
	char quality[30];
	int price ;
	
};
int main()
{
	struct product p;
	
	printf("enter id  name  quality  price\n");
	scanf("%d",&p.id);
	scanf("%s", p.name);
	scanf("%s",p.quality);
	scanf("%d",&p.price);
	
	printf("id %d\n  name %s\n  struct product %s \n price%d \n",p.id,p.name,p.quality,p.price);
	
}