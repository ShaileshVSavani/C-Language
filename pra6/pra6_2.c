/*Q.2 Write a Program to count the frequency of each character in a given string.
For example,
Input:
Enter any string: development

Output:
Frequency of each letter:
d => 1
e => 3
v => 1
l => 1
o => 1
p => 1
m => 1
n => 1
t => 1
*/
#include<stdio.h>
main(){
	char str[200],ch;
	int frequency[200]={0};
	int i;
	printf("Enter any string:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){
		frequency[str[i]]++;
	}
	for(i=0;str[i]!='\0';i++){
		if(frequency[str[i]]>1){
			ch=str[i];
		}
	}
	for
}
