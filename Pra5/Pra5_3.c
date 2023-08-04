/*  Q.3 Write a Program to find the transpose matrix of a given 2D array.
For example,
Input:
Enter the array's row & column size: 3

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
The transpose matrix of an array:
2 3 8
4 5 2
1 4 6*/

#include<stdio.h>
main(){
	int r,c;
	printf("Enter number of row:");
	scanf("%d",&r);
	printf("Enter number of column:");
	scanf("%d",&c);
	int a[r][c],i,j;
	printf("Enter 2D Array elements:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}	
	//int transpose[r][c];
	printf("\nGiven 2D Array is:\n");
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
			//transpose[i][j]=a[i][j];	
		}
		printf("\n");
	}
	printf("\nTranspose 2D Array is:\n");
	for(j=0;j<c;j++){
		for(i=0;i<r;i++){
			printf("%d ",a[i][j]);	
		}
		printf("\n");
	}
	
	
}
