/*Q.2 Write a Program to swap two variables using Pointers.
For example,
Input:
Enter the value of x: 5
Enter the value of y: 3

Output:
Before swapping:
x: 5
y: 3

After swapping:
x: 3
y: 5*/
#include<stdio.h>
void main(){
	int a,b;
	int *ptr1,*ptr2;
	ptr1=&a;
	ptr2=&b;
	
	printf("Enter a:");
	scanf("%d",ptr1);
	printf("\nEnter b:");
	scanf("%d",ptr2);
	
	*ptr1 = *ptr1 + *ptr2;
	*ptr2 = *ptr1 - *ptr2;
	*ptr1 = *ptr1 - *ptr2;
	
	printf("a:%d\nb:%d\n",a,b);
}
