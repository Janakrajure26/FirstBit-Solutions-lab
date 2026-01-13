#include<stdio.h>

void  checkNoWhichGreater(int* , int* , int*);// declaration

int main ()
{     

     int a, b, c;
	 printf("enter three numbers");
	 scanf("%d %d %d", &a, &b, &c);
	 
    checkNoWhichGreater(&a, &b, &c);//function call 
    
}
	 
 void checkNoWhichGreater(int * a, int * b ,int * c)// defination 
	 {
	 
	 
	 
	 if(*a>= *b && *a>=*c){
	 	 printf("first is greater\n");
	 	
	 } else if (*b>=*c && *b>=*a){
	 	 printf("second  greater\n");
	 	
	 }else 
	{  
         printf("third is greater\n");
	}
	}
	 
