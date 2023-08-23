/* sum of cross-diagonal elements*/
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

	printf("Cross-diagonal array value is:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			if(i==j||i+j==c-1){
			printf("%d ",a[i][j]); //we can do i+j==r-1 or i+j==c-1
				sum+=a[i][j];
			}
			else{
				printf("  ");
			}
        }
        printf("\n");
    }
	printf("sum of cross-diagonal elements is: %d",sum);	  
}
