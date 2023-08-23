/*Q.2 Write a Program to check if a given number is divisible by both 3 & 5 or not using UDF.For example,
Input:
Enter any number: 15

Output:
The given number is divisible by both 3 & 5.

------------------------------------------

For example,
Input:
Enter any number: 10

Output:
The given number is not divisible by both 3 & 5.*/
#include<stdio.h>
void div(){
	int a; 
	printf("Enter Number:");
	scanf("%d",&a);
	if(a%3==0 && a%5==0){
		printf("The number %d is divisible by 3 and 5",a);
	}
	else{
		printf("number is not divisible by 3 and 5");
	}
}
void main(){
	int x;
	div(x);
}
