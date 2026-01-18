
#include <stdio.h>
  int findNumber(int arr[], int n, int search);
    int main() {
	int array[100], n, i, search,  pos;

	printf("enter number of element:\n"); // array size
	scanf("%d",&n);
	
	printf("enter the number\n ");
	for(i=0; i<n; i++)
	 {
		scanf("%d",& array[i]);
	 }
	 printf("enter the search number\n");
	 scanf("%d", & search);
	 
	  pos = findNumber(array,n, search);
	 
	 
	 // display result 
	 if(pos!=-1)
	
	 	printf("number %d found at position %d\n",search , pos +1);
	 
	 else 
	
	 	printf("number %d not found in array\n", search);
		 
	 
	 return 0;
}
 int findNumber(int arr[], int n, int search)
 
 {
 	int i ;
 	
 	for(i=0; i<n; i++)
	 {
	 	if(arr[i]==search ){
	 		
	 		
	 		return i;
	 	
		 }
		 
	 }
	 
	 return -1;
 }

