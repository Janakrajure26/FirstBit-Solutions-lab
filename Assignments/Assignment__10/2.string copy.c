#include<stdio.h>
#include<string.h>
 int  main ()
 {
 	char source []= "janak";
 	char dest [20];
 	strcpy( dest,source);//copy source into destination 
 	printf("source string : %s\n", source);
 	printf("destination string :%s\n", dest);
 	
 	return 0;
 }