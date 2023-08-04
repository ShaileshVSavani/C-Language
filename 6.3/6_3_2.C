#include<stdio.h>
#include<conio.h>
main ()
{
  int n,i,factorial=1;
  clrscr();
  printf("Enter Number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   factorial=factorial*i;
  }
	printf("Factorial is %d",factorial);
  getch();
}