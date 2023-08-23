/*Q.3 Write a Program to find the formula's answer (x+y)^2*/
#include<stdio.h>
main(){
	int x,y,ans;
	printf("Enter value of x:");
	scanf("%d",&x);
	printf("Enter value of y:");
	scanf("%d",&y);
	
	ans=(x+y)*(x+y);
	printf("Answer is:%d",ans);
	return 0;
}
