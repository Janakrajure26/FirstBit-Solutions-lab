#include<stdio.h>

void checkNoWhichGreater();// declaration

int main ()
{
    checkNoWhichGreater();//function call 
}
	 
 void checkNoWhichGreater()// defination 
	 {
	     int a, b, c;
	 printf("enter three numbers");
	 scanf("%d %d %d", &a, &b, &c);
	 
	 if(a>=b && a>=c){
	 	 printf("%d is greater\n",a);
	 	
	 } else if (b>=c && b>=a){
	 	printf("%d  greater\n",b);
	 	
	 }else {
	 	printf("%d is greater\n",c);
	 }
	 
}