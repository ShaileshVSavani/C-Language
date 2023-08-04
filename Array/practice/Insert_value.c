#include<stdio.h>
main(){
	int n;
	printf("Enter value of n:");
	scanf("%d",&n);
	
	int a[n],i,pos,val;
	
	printf("\nEnter array elements:\n");
	for(i=0;i<n;i++){
	printf("a[%d]:",i);
	scanf("%d",&a[i]);
	}
	
	printf("\nOld array is:");
	for(i=0;i<n;i++){
	 	printf("%d ",a[i]);
	 }
	
	
	printf("\nEnter value:");
	scanf("%d",&val);
	
	printf("\nEnter position:");
	scanf("%d",&pos);
	
	for(i=n;i>pos;i--){
		a[i]=a[i-1];
	}
	 a[i]=val;
	 n++;
	 printf("\nNew array is:");
	 for(i=0;i<n;i++){
	 	printf("%d ",a[i]);
	 }	
}
