/*Q.1 Write a Program to check if a given password is strong or not by satisfying the below criteria:
- Password must contain at least one letter, one digit & one special symbol.
- Password must be at least 6 characters.For example,
Input:
Create your password: Admin@123

Output:
Your password is Strong.

-----------------------------------------

For example,
Input:
Create your password: hello#89

Output:
Your password is not Strong.*/

#include<stdio.h>
main(){
	int hasUpper=0,hasLower=0,hasDigit=0,hasSpecial=0,hasSpace=0,ch=0,i;
	char pw[20];
	printf("Creat Password:");
	scanf("%s",pw);
	for(i=0;pw[i]!='\0';i++){
		ch++;
	}
		for(i=0;pw[i]!='\0';i++){
			if(pw[i]>=65&&pw[i]<=90){
				hasUpper=1;
			}
			if(pw[i]>=97&&pw[i]<=122){
				hasLower=1;
			}
			if(pw[i]>='0'&&pw[i]<='9'){
				hasDigit=1;
			}
			if(pw[i]=='32'){
				hasSpace=1;
			}
			else{
				hasSpecial=1;
			}
	}
		if(hasUpper&&hasLower&&hasDigit&&!hasSpace&&hasSpecial){
				printf("Your password is Strong.");
			}
			else{
				printf("Your password is not Strong.");
			}
}
