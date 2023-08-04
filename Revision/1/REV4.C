//WAP to print capital and small alphabet in sequence. eg:Aa,Bc...

#include<stdio.h>
#include<conio.h>
main (){
	char ch='a';
	clrscr();
	printf("Print alphabet:");
	while(ch<'Z'|| ch<'z') {
		printf("%c",ch);
	}
	getch();


}