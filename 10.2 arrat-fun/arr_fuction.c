#include<stdio.h>
void display(a[],int n){
	int i;
	for(i=0;i<=n;i++){
		 //printf("a[%d]:",i);
		 scanf("%d",&a[i]);
}
void ascend(a[],int n){
	printf("Array after sorting:");
	int j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
			printf("%d",a[i]);
	}
}
void descend(a[],int n){
	printf("\nArray after sorting in descending order:");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
		printf("%d ",a[i]);
	}
}
void insertUpdate(a[],int n){
	int i,pos,val;
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
void delete(a[],int n){
	int i,pos,val;
	printf("\nEnter position:");
	scanf("%d",&pos);
	
	for(i=pos;i<n;i++){
		a[i]=a[i+1];
	}
	 n--  ;
	 printf("\nNew array is:");
	 for(i=0;i<n;i++){
	 	printf("%d ",a[i]);
	 }	
}
void avg(a[],int n){
	int a[n];
	float avg;
	int i,sum=0;
	for(i=0;i<n;i++){
		printf("a[%d]: %d\n",i,a[i]);
			sum+=a[i];
			avg=sum/n;
	}
	printf("Sum is %d\n",sum);
	printf("Average of 1D Array is %.2f",avg);
}
