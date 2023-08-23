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
int mod(int m, int n){
	return m%n; 
}
void div(int m, int n){
		printf("Enter value of a:");
			scanf("%d",&m);
			printf("Enter value of b:");
			scanf("%d",&n);
			printf("Division is: %.2f",(float)m/n);		
}

int calc(){
int a,b,choice;
do{
	printf("\n\nEnter choice:\n (1)Press 1 for Addition\n (2)Press 2 for Subtraction\n (3)Press 3 for Division\n (4)Press 4 for Multiply\n (5)Press 5 for Modulus\n (6)Press 0 for Exit\n");
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
			break;
		case 3:
			div(a,b);
			break;
		case 4:
			printf("Enter value of a:");
			scanf("%d",&a);
			printf("Enter value of b:");
			scanf("%d",&b);
			printf("Multiplication is: %d",mul(a,b));
			break;
		case 5:
			printf("Enter value of a:");
			scanf("%d",&a);
			printf("Enter value of b:");
			scanf("%d",&b);
			printf("Modulus is: %d",mod(a,b));
			break;
		case 0:
			printf("Exit");
			break;
		default:
			printf("Invalid Choice!!");
   }
 }while(choice!=0);
}
