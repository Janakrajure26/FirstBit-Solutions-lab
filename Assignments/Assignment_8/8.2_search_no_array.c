
#include <stdio.h>

int main() {
	int array[100], n, i, search, found;

	printf("enter number of element:\n"); // array size
	scanf("%d",&n);
	printf("enter the elements\n ");
	for(i=0; i<n; i++)
	 {
		scanf("%d",& array[i]);
	 }
	 printf("enter the search number\n");
	 scanf("%d", & search);
	 
	 for(i=0; i<n; i++)
	 {
	 	if(array[i]=search ){
	 		found =1;
	 		break;
		 }
		 
	 }
	 // display result 
	 if(found)
	 {
	 	printf("number %d found at position %d\n",search , i+1);
	 }
	 else 
	 {
	 	printf("number %d not found in array\n", search);
		 
	 }
	 return 0;
}

