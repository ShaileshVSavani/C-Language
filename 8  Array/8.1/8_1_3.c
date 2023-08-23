/* Write a Program to perform the addition operation of two 1D
 arrays & store it in another array. Keep in mind that both array
 sizes must be the same.
For example,
Input:
Enter array size: 5

Enter array A's elements:
a[0] = 7
a[1] = 4
a[2] = 9
a[3] = 5
a[4] = 2

Enter array B's elements:
b[0] = 1
b[1] = 3
b[2] = 1
b[3] = 7
b[4] = 3

Output:
Array C is: 8, 7, 10, 12, 5*/

#include<stdio.h>
main(){
	int a[5]={7,4,9,5,2};
	int b[5]={1,3,1,7,3};
	int c[5]={};
	int i,sum=0;
	printf("A array:");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	printf("\nB array :");
	for(i=0;i<5;i++){
		printf("%d ",b[i]);		
	}
	printf(" \nAddition of two array is:");
	for(i=0;i<5;i++){
		c[i]=a[i]+b[i];
		printf(" %d ",c[i]);
	}
}
