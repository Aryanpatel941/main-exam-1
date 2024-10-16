#include<stdio.h>
main(){
	int first,second,third;
	printf(" enter first angle  :");
	scanf("%d",&first);
	printf(" enter second angle:");
	scanf("%d",&second);
	
	third= 180-(first+second);
	printf(" third angle of traingle is :%d",third);
	
}
