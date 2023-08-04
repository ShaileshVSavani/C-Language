/*  Q.2 Write a Program to find the largest element from a given 2D array.
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
The largest element is: 9*/

#include<stdio.h>
main(){
	int r,c;
	printf("Enter value of row:");
	scanf("%d",&r);
	printf("Enter value of column:");
	scanf("%d",&c);

	int a[r][c],i,j;
	printf("\nEnter 2D array's elements:\n");
    for (i = 0; i < r; i++) {
        for ( j = 0; j < c; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

	printf(" 2D Array is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	  
	int max=a[0][0];
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(a[i][j]>max){
				max=a[i][j];
			}
		}
	}
	printf("\nmax value is: %d",max);	
}

