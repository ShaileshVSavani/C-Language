#include<stdio.h>
main(){
	int a[5]={7,4,9,5,2};
	int b[5]={1,3,1,7,3}
	int c[5]={};
	int i,sum=0;
	for(i=0;i<5;i++){
		printf("a[%d]: %d\n",i,a[i]);
			sum+=a[i];
	
	}
	for(i=0;i<5;i++){
		printf("a[%d]: %d\n",i,b[i]);
			
	}
	c[5]=a[i]+b[i];
	printf(" %d\n",c[i]);
}
