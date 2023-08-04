/*Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.
For example,
Input:
Enter the first number: 2020

Enter the second number: 2040

Output:
The array is: 2020, 2024, 2028, 2032, 2036, 2040
*/

#include<stdio.h>
main(){
	int sy, ey,i,size;
	printf("Enter Starting year:");
	scanf("%d",&sy);
	printf("Enter end Year:");
	scanf("%d",&ey);
    
		size=(ey-sy)/4+1;
		int ly[size],index=0;
		for(i=sy;i<=ey;i++){
			if(i % 4==0){
				ly[index]=i;
				index++;	 
			}
    	}	
     
		printf("Leap Year between %d and %d are:",sy,ey);
		for(i=0;i<index;i++){
			printf("%d ",ly[i]);	
		}	
	}		

