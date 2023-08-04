/* Q.2 Write a Program to convert the given string in lowercase without using any string function.
For example,
Input:
Enter any string: HELLO WORLD

Output:
Lowercase string: hello world*/

#include<stdio.h>
main(){
	char name[20];
	int i; printf("Enter Name:");
	scanf("%[^\n]",&name);
	printf("Sring:");
	for(i=0;i<20;i++){
	 if(name[i]>=65&&name[i]<=90){
				printf("%c",name[i]+32);
		}
	}
}
