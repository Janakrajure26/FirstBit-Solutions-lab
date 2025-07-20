#include<stdio.h>
int main ()
{
	int n,i, max ,min;;
  int array[100];
  
  printf("enter the range of element:\n");
  scanf("%d",&n);
  
  printf("enter the number of element:\n" ,n );
  for(i=0;i<n;i++ ){
  
  scanf("%d",&array[i]);
}
  min=max=array[0];
  
  for(i=0;i<n;i++)
  {
  	if(array[i]<min)
  	min=array[i];
  
  
  if(array[i]>max)
  max=array[i];
  }
  
  printf("minmim number =%d\n", min);
  printf("maximum number =%d\n", max);
  
  return 0;
}