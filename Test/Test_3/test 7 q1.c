#include<stdio.h>
  void swap (int arr[] , int x, int y)
 {
 	int temp ;
 	temp = arr[x];
 	arr[x]=arr[y];
 	arr[y]= temp;
 	
 }

 int main ()
 {
 	int arr[]={11, 23, 30, 4, 21, 45, 50 };
 	  int x =3;
 	  int y=5;
 	  
 	  int i;
 	  
 	  printf("orginarl array:\n");
 	  for (i=0; i<7; i++)
 	  {
 	  	scanf("%d", &arr[i]);
	   }
 	  
 	  swap(arr, x,y);
 	  
 	  printf("after swapping %d and %d : \n ", x, y); 
 	  for(i=0; i<7; i++)
 	  {
 	  	printf("%d", arr[i]);
	   }
 	 return 0;
 	
 }