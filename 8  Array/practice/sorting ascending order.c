/* sorting ascending order*/
#include<stdio.h>
main(){
	int n;
	printf("Enter array length:");
	scanf("%",&n);
	
	int a[n],i,j;
	printf("Enter array elements:\n");
	for(i=0;i<n;i++){
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	printf("array before sorting:\n");
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	printf("Array after sorting:");
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

