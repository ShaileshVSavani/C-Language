#include<stdio.h>
#include<conio.h>
main()
	{
	int a,b,c,d;
	clrscr();
	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);
	printf("Enter c:");
	scanf("%d",&c);
	printf("Enter d:");
	scanf("%d",&d);
	if(a==b==c==d)
	{
	 printf("All are same");
	}
	else if(a>b)
	{
	 printf("A is big");
	}
	else
	{
		if(b>c)
		{
		 printf("B is big");
		}
		else
		{
			if(c>d)
			{
			printf("C is big");
			}
			else
			{
			 printf("D is big");
			}
		}
	}
	  getch();
	}