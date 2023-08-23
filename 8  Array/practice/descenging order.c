/* sorting descending order*/
#include<stdio.h>
main(){
	int n;
	printf("Enter array length:");
	scanf("%d",&n);
	
	int a[n],i,j;
	printf("Enter array elemnts:\n");
	for(i=0;i<n;i++){
		printf("a[%d]:",i);
		scanf("%d",&a[i]);	
	}
	printf("Array before sorting:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
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
