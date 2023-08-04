#include<stdio.h>
main(){
	int c,r;
	printf("Enter value of row:\n");
	scanf("%d",&r);
	printf("Enter value of column:\n");
	scanf("%d",&c);
	int a[r]{c};
	float avg;
	int i,j,sum=0;
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
		printf("a[%d][%d]: %d\n",i,j,a[i][j]);
			sum+=a[i][j];
			avg=sum/5.0;
		}
	}
	printf("Sum is %d\n",sum);
	printf("Average of 2D Array is %.2f",avg);
