#include<stdio.h>

 void check_the_traingle_is_equlateral();
 
 void main()
 {
 	check_the_traingle_is_equlateral();
 	
 	
 }
       
 
 
  void  check_the_traingle_is_equlateral()
  {
  		int a, b, c;

	printf(" enter the three side of traingle");
	scanf("%d %d %d", &a,&b,&c );
	if (a==b && b==c) 
	{
		printf("trangle is qulateral\n");
	} else 
	{
		if(a==b||b==c||c==a) 
		{
			printf("trangle is isosceles");
		} else 
		{
			printf("traingle is scalene ");
		}
	}

  	
  	
  	
  }