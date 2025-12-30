#include<stdio.h>

 void checkPassFail();//declaration
 
int main (){
	
 checkPassFail();// function call	
}

void checkPassFail() // definition
{
    int marks;
	
	printf("enter the marks");
	scanf("%d", &marks);
	
	if (marks>75){
		printf("distinction\n");
	}else if(marks>65){
		printf("first class\n");
	}else if (marks>55){
		printf("second class\n");
	}else if(marks>=40){
		printf("pass\n");
	}else{
		printf("fail\n");
	}
}
