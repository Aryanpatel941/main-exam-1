#include<stdio.h>
main(){
	printf(" enter your age :");
	int age;
	scanf("%d",&age);
	if(age>=18){
		printf("you can vote ");
	}
	else{
		printf("you can not vote");
	}
}
