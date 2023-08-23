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

int calc(){
int a,b,choice;
do{
	printf("\n\nEnter choice:\n (1)Addition\n (2)Subtraction\n (3)Division\n (4)Multiply\n (5)Exit\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("\nEnter value of a:");
			scanf("%d",&a);
			printf("Enter value of b:");
			scanf("%d",&b);
			printf("Addition is: %d",sum(a,b));
			break;
		case 2:
			printf("Enter value of a:");
			scanf("%d",&a);
			printf("Enter value of b:");
			scanf("%d",&b);
			printf("Substraction is: %d",sub(a,b));
			sub(a,b);
			break;
		case 3:
			printf("Enter value of a:");
			scanf("%d",&a);
			printf("Enter value of b:");
			scanf("%d",&b);
			printf("Division is: %d",div(a,b));
			div(a,b);
			break;
		case 4:
			printf("Enter value of a:");
			scanf("%d",&a);
			printf("Enter value of b:");
			scanf("%d",&b);
			printf("Multiplication is: %d",mul(a,b));
			mul(a,b);
			break;
		case 5:
			printf("Exit");
			break;
		default:
			printf("Invalid Choice!!");
   }
 }while(choice!=5);
}
