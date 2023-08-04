//WAP to find sum of a first and the last digit of a number.
#include<stdio.h>
#include<conio.h>
main()
{
	int n, sum=0, l,f;
	clrscr();
	printf("Enter anumber:");
	scanf("%d",&n);
	l=n%10;
	while(n>=10)
	{
		n=n/10;
	}
	f=n;
	sum=f+l;
	printf("sum of first and last digits is %d",sum);
	getch();
}