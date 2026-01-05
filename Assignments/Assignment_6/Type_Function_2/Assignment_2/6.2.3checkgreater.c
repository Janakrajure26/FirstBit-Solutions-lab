#include<stdio.h>

int checkNoWhichGreater();// declaration

int main ()
{     int res;
   res = checkNoWhichGreater();//function call 
    
	 
	 if(res ==1){
	 	 printf("first is greater\n");
	 	
	 } else if (res == 2){
	 	printf("second  greater\n");
	 	
	 }else {
	 	printf("third is greater\n");
	 }
}
	 
 int checkNoWhichGreater()// defination 
	 {
	 
	     int a, b, c;
	 printf("enter three numbers");
	 scanf("%d %d %d", &a, &b, &c);
	 
	 if(a>=b && a>=c){
	 	 return 1;
	 	
	 } else if (b>=c && b>=a){
	 	return 2;
	 	
	 }else 
	{  
	   return 3;
	}
	}
	 
