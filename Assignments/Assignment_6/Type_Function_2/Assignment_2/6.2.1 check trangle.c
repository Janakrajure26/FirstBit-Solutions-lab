#include<stdio.h>

 int check_the_traingle_is_equlateral();
 
 int main()
 {      int res ;
    res =	check_the_traingle_is_equlateral();
 	
 	    if (res == 1)
 	    {
 	    	printf("trangle is qulateral\n");
		 }
		 else{
		 
 		if(res == 2) 
		{
			printf("trangle is isosceles");
		} else 
		{
			printf("traingle is scalene ");
		}
		
	}
 	
 }
       
 
 
  int check_the_traingle_is_equlateral()
  {
  		int a, b, c;

	printf(" enter the three side of traingle");
	scanf("%d %d %d", &a,&b,&c );
	if (a==b && b==c) 
	{
		return 1;
	} else 
	{
		if(a==b||b==c||c==a) 
		{
		  return 2;
		} else 
		{
		  return 0;
		}
	}

  	
  	
  	
  }