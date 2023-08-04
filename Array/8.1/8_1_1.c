/*  Write a Program to find the length of a 1D array.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 3
a[1] = 7
a[2] = 1
a[3] = 8
a[4] = 6

Output:
Length of an Array: 5*/

#include<stdio.h>
main(){
	int a[5]={3,7,1,8,6};
	int i,count=0;
	printf("Array is:");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
			count++;
	}

	printf("\nLenth of 1D Array is %d",count);
}
