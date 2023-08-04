#include<stdio.h>
int sum(int m, int n){
	return m+n;
}
int sub(int m, int n){
	return m-n;
}
int mul(int m, int n){
	return m*n;
}
int div(int m, int n){
	return m/n;
}

int calc(int x,int y){
	int a,b,choice;
	printf("Enter choice:\n (1)Addition\n (2)Subtraction\n (3)Divide\n (4)Multiply\n (5)Exit");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			sum(a,b);
			break;
		case 2:
			sub(a,b);
			break;
		case 3:
			div(a,b);
			break;
		case 4:
			mul(a,b);
			break;
		case 5:
			break;
		
   }
}
