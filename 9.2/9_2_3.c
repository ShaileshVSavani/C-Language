/*Q.3 Write a Program to check if the given string is Palindrome or not using string built in functions.*/

#include<stdio.h>
main(){
	char str[50];
	int i,j;
	printf("Enter String:");
	scanf("%[^\n]",&str);
	while(i<=j){
		if(str[i]==str[j]){
			i++;
			j--;
		}
		else{
			break;
		}
	}
	
	if(i>j){
		printf("String is Palindrome");
	}
	else{
		printf("not Palindrome");
	}
}
