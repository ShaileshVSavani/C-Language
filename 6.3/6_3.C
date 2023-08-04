#include<stdio.h>
#include<conio.h>
main()
{
	int n, i=1;
	clrscr();
	printf("Enter Number:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}
	getch();
}