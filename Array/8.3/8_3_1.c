/*  Write a Program to find the average of a given 2D array.
For example,
Input:
Enter the array's row size: 3
Enter the array's column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6

Output:
Average of an Array: 3.88*/

#include<stdio.h>
main(){
	int c,r;
	printf("Enter value of row:");
	scanf("%d",&r);
	printf("Enter value of column:");
	scanf("%d",&c);
	
	int a[r][c];
	float avg;
	int i,j,sum=0;
	
	printf("Enter array elements :\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
			sum+=a[i][j];
			avg=sum/(float)(r*c);
	    }
	}
	printf("Sum is %d\n",sum);
	printf("Average of 2D Array is %.2f",avg);
}
