/*Q.1 Write a Program to find the length of a string using a Pointer.
For example,
Input:
Enter any string: hello world

Output:
The length of a string is: 11*/

#include<stdio.h>


void main(){
	char str[25];
	char *ptr;
	int i;
	printf("Enter any String:");
	gets(str);
	
	ptr=str;

	for(i=0; *ptr!='\0';i++){
		ptr++;
		
	}
	printf("Length of string is: %d",i);
	
}
