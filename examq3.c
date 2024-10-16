#include<stdio.h>
main(){
	printf(" enter any number :");
	int num,digit,num2=0;
	scanf("%d",&num);

	for(;num>0;){
		digit=num%10;
		num2=num2*10+digit;
		num=num/10;	
	}
	printf(" number reverse :%d",num2);
	
}
