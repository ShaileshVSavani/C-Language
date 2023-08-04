/*Q.2 Write a Program to create a login mechanism by entering the right email & password. 
You can compare it with your desired email & password.
For example,
Input:
Enter your email: admin@gmail.com
Enter your password: 123456

Output:
Login Successful...

-----------------------------------------

For example,
Input:
Enter your email: xyz@gmail.com
Enter your password: 123456

Output:
Login Failed. Invalid Credentials.*/

#include<stdio.h>
#include<string.h>
main(){
	char str1[200],str2[200],cpy1[200],cpy2[200];
	str1[200]="admin@gmail.com";
	str2[200]="123456";
	printf("\nEnter email:");
	gets(cpy1);
	printf("\nEnter Password:");
	gets(cpy2);
	
	if(strcmp(cpy1, str1) == 0 && strcmp(cpy2, str2) == 0){
//	if((str1==cpy1)&&(str2==cpy2)){
		printf("\nLogin Successful.");
	}
	else{
		printf("\nLogin Failed. Invalid Credentials.");
	}
	
}
