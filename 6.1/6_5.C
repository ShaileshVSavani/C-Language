#include<stdio.h>
#include<conio.h>
main ()
{
  int a;
  int b;
  clrscr();

  printf("Enter First Year:");
  scanf("%d",&a);

  printf("Enter Second Year:");
  scanf("%d",&b);
  while(b>=a)
  {
	if(a%4==0)
	{
		printf("%d ",a);
	}
	a++;
  }
  getch();
}