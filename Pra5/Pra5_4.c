/*  Q.4 Write a Program to print and find the sum of all elements of a given row & column from a 2D array.
For example,
Input:
Enter the array's row size: 3
Enter the array's column size: 3

Enter array's elements:
a[0][0] = 2
a[0][1] = 7
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 9
a[2][2] = 6

Output:
Enter row number: 0
Elements of row 0: 2, 7, 1
The sum of a row 0: 10

Enter column number: 2
Elements of column 2: 1, 4, 6
The sum of column 2: 11*/

#include<stdio.h>
main(){
	int r,c;
	printf("Enter number of row:");
	scanf("&d",&r);
    printf("Enter number of column:");
    scanf("%d", &c);
	
	int a[r][c],i,j;
	printf("\nEnter 2D array Elements:\n");
	for ( i=0; i<r;i++) {
        for (j=0; j<c;j++) {
            printf("a[%d][%d] ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
	
	printf("\n2D array is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	int row,col, rSum=0,cSum=0;
	printf("\nEnter number of row is:%d",row);
	scanf("&d",&row);
	printf("\nElements of row is:");
	for(j=0;j<col;j++){
		printf("%d ",a[row][j]);
		rSum+=a[row][j];
	}
	printf("\nSum of all elements of row %d is:%d ",row,rSum);
}
