#include<stdio.h>
main(){
	int n;
	printf("Enter value of n:");
	scanf("%d",&n);
	
	int a[n],i,pos,val,found=0;
	
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
	
	/*printf("\nEnter position:");
	scanf("%d",&pos);*/
	//find the position of element to delete
	for(i=0;i<n;i++){
		if(a[i]==val){
			pos=i;
			found=1;
			break;
		}
	}
	if(found==1){
			for(i=pos;i<n-1;i++){
			a[i]=a[i+1];
			}
			n--;
	
	 	printf("\nNew array is:");
	 	for(i=0;i<n;i++){
	 		printf("%d ",a[i]);
	 	}
	 	printf("\n");
	}	
	else{
		printf("element not found in array");
	} 
}
