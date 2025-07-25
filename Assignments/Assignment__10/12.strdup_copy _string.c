#include<stdio.h>
#include<string.h>
#include <stdlib.h> //for malioc and free
int main ()
{
	char original[]= "janak rajure";
	
	char *cpoy = strdup(original);//duiplicate the string
	
	if(copy != NULL){
		printf("original :%s\n", original);
		printf("copy: %s\n", copy);
		
		free(copy);
	}else{
		printf("failed to allocate memory.\n");
	}
	return 0;
}