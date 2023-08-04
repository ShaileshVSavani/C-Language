#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("Enter value of b:");
	scanf("%d",&b);
	printf("Enter value of c:");
	scanf("%d",&c);
	(a<b)
	     ?(a<c)
		     ? printf("minimum number is a: %d",a)
		     : printf("minimum number is c: %d",c)
	     :(b<c)
		     ? printf("minimum number is b: %d", b)
		     : printf("minimum number is c: %d",c);
	getch();
}