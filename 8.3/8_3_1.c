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
