/* WAP to perform the merge operation of two 1D array & store it in another array. Keep in mind 
that both array sizes can be different*/

#include<stdio.h>
main(){
	int i,n1,n2,a[n1],b[n2],c[n1+n2];
	
	printf("Enter array A's lenght:");
	scanf("%d",&n1);
    
	
	printf("Enter array B's lenght:");
	
	scanf("%d",&n2);
    
    printf("Enter array A's element:\n");
	for(i=0;i,i<n1;i++){
		printf("Enter a[%d]:",i); 
		scanf("%d",&a[i]);
	}
		printf("Enter array B's element:\n");
	for(i=0;i,i<n2;i++){
		printf(" Enter b[%d]:",i);
		scanf("%d",&b[i]);
	}
	printf("Array c is:");
	for(i=0;i,i<n1;i++){
			//c[i]=a[i];
			printf("%d",a[i]);
	}
	for(i=0;i,i<n2;i++){
		//	c[i+n1]=b[i];
			printf("%d",b[i]);		
	}
	
}
