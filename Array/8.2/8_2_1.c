/*  Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
For example,
Input:
Enter array A's size: 5

Enter array A's elements:
a[0] = 7
a[1] = 4
a[2] = 9
a[3] = 5
a[4] = 2

Enter array B's size: 3

Enter array B's elements:
b[0] = 1
b[1] = 3
b[2] = 6

Output:
Array C is: 7, 4, 9, 5, 2, 1, 3, 6

*/

#include<stdio.h>
main(){
	int n1,n2;
	
	printf("Enter array A's lenght:");
	scanf("%d",&n1);
    
	
	printf("Enter array B's lenght:");
	scanf("%d",&n2);
    
    int a[n1],b[n2],i;
    printf("Enter array A's element:\n");
	for(i=0;i<n1;i++){
		printf("Enter a[%d]:",i); 
		scanf("%d",&a[i]);
	}
	printf("Enter array B's element:\n");
	for(i=0;i<n2;i++){
		printf(" Enter b[%d]:",i);
		scanf("%d",&b[i]);
	}
	int n=n1+n2;
	int c[n];

	for(i=0;i,i<n1;i++){
			c[i]=a[i];
	}
	for(i=0;i,i<n2;i++){
			c[n1+i]=b[i];	
	}
	printf("Array c is:");
		for(i=0;i,i<n;i++){
			printf("%d ",c[i]);		
	}
	
}
