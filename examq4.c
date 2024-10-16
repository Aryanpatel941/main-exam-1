#include<stdio.h>
main(){
	printf("enter radius :");
	int radius,ans;
	scanf("%d",&radius);
	
	
	ans = 4/3 * 3.14 * (radius * radius * radius);
	
	printf("ans is :%d",ans);
	
}
