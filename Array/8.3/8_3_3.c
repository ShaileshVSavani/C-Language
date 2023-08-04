/*  Write a Program to find the sum of diagonal elements from a given 2D array.
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
The sum of diagonal elements of an Array: 13*/

#include<stdio.h>
main(){
	int c,r;
	printf("Enter value of row of a array:");
	scanf("%d",&r);
	printf("Enter value of column of a array:");
	scanf("%d",&c);
	
	int a[r][c];
	int i,j,sum=0;
	
	printf("Enter Array elements :\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
	    }
	}

	printf("2D Array is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			  printf(" %d" ,a[i][j]);
	    }
	 	printf("\n");
	}

	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==j){
				sum+=a[i][j];
			}
	    } 
	}
	printf("sum of diagonal elements is: %d",sum);	  
}
