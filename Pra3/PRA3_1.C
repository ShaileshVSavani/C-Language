//WAp to print all alphabets from a to z by skipping 3 alphabets using do while loop.
#include<stdio.h>
#include<conio.h>
main()
{
	int i=1;
	char ch='a';
	clrscr();
	printf("Alphabets is:");
	do{
	     printf("%c",&ch);
	     i+=3;
	}while(ch<=='z');
	getch();
}