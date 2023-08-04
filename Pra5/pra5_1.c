/* Q.1 Write a Program to find all the negative elements from a given 1D array.
For example,
Input:
Enter the array's size: 5

Enter array's elements:
a[0] = 2
a[1] = -4
a[2] = 1
a[3] = -3
a[4] = -5

Output:
Negative elements from an Array: -4, -3, -5*/

#include<stdio.h>
main(){
	int n,i, a[n];
	printf("enter array length:");
	scanf("%d",&n);
	printf("\nEnter array elements:\n");
	for(i=0;i<n;i++){
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
		}
		printf("\nNegetive elements from array:");
		for(i=0;i<n;i++){
			if(a[i]<0){
				printf("%d",a[i]);
			}
			else{
				printf(" ");
			}	
		}
}
