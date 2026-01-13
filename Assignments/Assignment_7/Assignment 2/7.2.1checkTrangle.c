#include<stdio.h>

 void check_the_traingle_is_equlateral(int*, int* ,int*);
 
 int main()
 {   
            int a, b, c;
        	printf(" enter the three side of traingle");
	         scanf("%d %d %d", &a,&b,&c );
        
        	check_the_traingle_is_equlateral( &a, &b, &c);
 	
 	    
		
	
 	
 }
       
 
 
  void check_the_traingle_is_equlateral(int *a , int *b , int *c)
  {
  	
	if (*a==*b && *b==*c) 
	{
	   	printf("trangle is qulateral\n");
	} else 
	{
		if(*a==*b||*b==*c||*c==*a) 
		{
		  	printf("trangle is isosceles");
		} else 
		{
		  	printf("traingle is scalene ");
		}
	}

  	
  	
  	
  }