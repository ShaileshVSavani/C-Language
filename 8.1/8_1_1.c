#include<stdio.h>
main(){
	int a[5]={3,7,1,8,6};
	int i,count=0;
	for(i=0;i<5;i++){
		printf("a[%d]: %d\n",i,a[i]);
			count++;
	}

	printf("Lenth of 1D Array is %d",count);
}
