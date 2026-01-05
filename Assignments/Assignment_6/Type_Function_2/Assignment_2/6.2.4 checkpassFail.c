#include<stdio.h>

 int checkPassFail();//declaration
 
int main (){
	int res;
 res = checkPassFail();// function call
 
 	if (res == 1){
		printf("distinction\n");
	}else if(res == 2){
		printf("first class\n");
	}else if (res == 3){
		printf("second class\n");
	}else if(res == 4){
		printf("pass\n");
	}else{
		printf("fail\n");
	}
 	
}

int checkPassFail() // definition
{
    int marks;
	
	printf("enter the marks");
	scanf("%d", &marks);
	
	if (marks>=75){
		return 1;
	}else if(marks>=65){
		return 2;
	}else if (marks>=55){
		return 3;
	}else if(marks>=40){
		return 4;
	}else{
		return 0;
	}
}
