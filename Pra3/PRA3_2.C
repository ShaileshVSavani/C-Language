//WAP to count the total number of digits in a number.
#include<stdio.h>
#include<conio.h>
main()
{
	int n, count=0;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		n=n/10;
		count++;
	}
	printf("Total number of digits is %d",count);
	getch();
}