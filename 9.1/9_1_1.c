/* Q.1 Write a Program to convert the given string in uppercase without using any string function.
For example,
Input:
Enter any string: hello world

Output:
Uppercase string: HELLO WORLD
*/

#include<stdio.h>
main(){
	char name[20];
	int i; printf("Enter Name:");
	scanf("%[^\n]",&name);
	printf("Sring:");
	for(i=0;i<20;i++){
	 if(name[i]>=97&&name[i]<=128){
				printf("%c",name[i]-32);
		}
	}
}
