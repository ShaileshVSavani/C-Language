#include<stdio.h>
#include<conio.h>
main ()
{
  int n,i,sum=0;
  clrscr();
  printf("Enter Number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {     sum=sum+i;
  }
  printf("Sum is %d", sum);
  getch();
}