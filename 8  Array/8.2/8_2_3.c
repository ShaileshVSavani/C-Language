/*  Write a Program to find square of each element from the given array.
For example,
Input:
Enter array size: 5

Enter array elements:
a[0] = 7
a[1] = 4
a[2] = 9
a[3] = 5
a[4] = 2


Output:
The squares are: 49, 16, 81, 25, 4*/

#include<stdio.h>
main(){
	int i;
	int a[5]={2,3,4,5,6};
    
	printf("Array elements :");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
		a[i]=a[i]*a[i];
	}
	printf("\nSquare of elements :");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
}
