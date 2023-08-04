#include<stdio.h>
main(){
	int c,r;
	printf("Enter value of row of a array:");
	scanf("%d",&r);
	printf("Enter value of column of a array:");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],x[r][c];
	int i,j,sum=0;
	
	printf("Enter A array elements :\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("a[%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
	    }
	}
	printf("Enter B array elements :\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("b[%d][%d]:",i,j);
		scanf("%d",&b[i][j]);
	    }
	}
	printf("Addition ot two 2D array :\n");
	for(i=0;i<=r;i++){
		for(j=0;j<=c;j++){
	//	printf("b[%d][%d]:",i,j);
	//	scanf("%d",&b[i][j]);
	    
	    x[i][j]=a[i][j]+b[i][j];
	    }
	}
	printf(" %d\n",x[i][j]);
//	printf("Average of 2D Array is %.2f",avg);
}
