#include<stdio.h>
main(){
	printf(" enter any number :");
	int num,fdigit,ldigit,sum=0;
	scanf("%d",&num);
	ldigit=num%10;
	while(num>9){
	num=num/10;
	}
	fdigit=num;
	sum=fdigit+ldigit;
	printf("sum of fdigit and ldigit is :%d",sum);
	
	
	
	
}
