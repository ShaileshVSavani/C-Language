#include<stdio.h>
#include "arr_function.c"
 void main(){
	int n, a[n],i;
	printf("Enter Array Size:");
	scanf("%d",&n);
	printf("Enter Array Elements:\n");
	for(i=0;i<n;i++){
		 printf("a[%d]:",i);
		 scanf("%d",&a[i]);
	
	}
	array(a,n);
}
