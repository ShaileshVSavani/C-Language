/*Q.1 Write a Program to check whether a string is a palindrome or not without using string functions.
For example,
Input:
Enter any string: nayan

Output:
Given string is a Palindrome.

------------------------------------------------

For example,
Input:
Enter any string: hello

Output:
Given string is not a Palindrome.*/
#include<stdio.h>
main(){
	char str[100],rev[100];
	int i, len=0, c=0;
	printf("Enter any string:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){
		len++;
	}
	for(i=0;str[i]!='\0';i++){
		rev[len-i-1]=str[i];
	}
	for(i=0;str[i]!='\0';i++){
		if(rev[i]==str[i]){
			c++;
		}
	}
	if(len==c){
		printf("string is a palindrome ");
	}
	else{
		printf("string is not a palindrome ");
	}
}
