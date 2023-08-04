#include<stdio.h>
#include<conio.h>
main ()
{
  int n,i;
  clrscr();
  printf("Enter Number:");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
	printf("\n%d x %d = %d\n",n,i,n*i);
  }
  getch();
}