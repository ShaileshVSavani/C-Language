/*  Q.3 Write a Program to convert the given string in toggle case without using any string function.
For example,
Input:
Enter any string: HelLo worLD

Output:
Toggle case string: hELlO WORld*/

#include<stdio.h>
main(){
	char name[20];
	int i; 
	printf("Enter Name:");
	scanf("%[^\n]",&name);
	printf("Sring:");
	for(i=0;i<20;i++){
    if(name[i]>=65&&name[i]<=90){
			printf("%c",name[i]+32);
	}
	else if(name[i]>=97&&name[i]<=128){
			printf("%c",name[i]-32);
	}
		
	}
}
