/* Q.4 Write a Program to convert the given string in Title Case.*/
#include<stdio.h>
main(){
	char name[20];
	int i; 
	printf("Enter Name:");
	scanf("%[^\n]",&name);
	printf("Sring:");
	if(name[0]>=97&&name[0]<=128){
		printf("%c",name[0]-32);
	}
	for(i=1;name[i]!='\0';i++){
   		if(name[i]>=97 && name[i]<=128  && !(name[i-1]>=97&&name[i-1]<=128)){
			name[i]=name[i]-32;
		}	
		else if(name[i]>=65&&name[i]<=90){
			name[i]=name[i]+32;
		}
	}
	printf("Title Case:%s\n",name);
}
