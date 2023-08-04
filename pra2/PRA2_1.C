
#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("Enter a Number:");
	scanf("%d",&a);
	(a%2==1)
		?printf("Nuber is ODD")
		:printf("Number is EVEN");
	getch();

}