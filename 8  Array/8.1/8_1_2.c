/*  .2 Write a Program to find the average of a 1D array.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 12
a[1] = 42
a[2] = 18
a[3] = 50
a[4] = 26

Output:
Average of an Array: 29.6*/

#include<stdio.h>
main(){
	int a[5]={12,42,16,50,26};
	float avg;
	int i,sum=0;
	for(i=0;i<5;i++){
		printf("a[%d]: %d\n",i,a[i]);
			sum+=a[i];
			avg=sum/5.0;
	}
	printf("Sum is %d\n",sum);
	printf("Average of 1D Array is %.2f",avg);
}
