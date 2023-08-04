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
  if(a==b==c)
  {
     printf("All are same");
  }
  else if(a<b)
  {
     printf("A is small");
  }
  else if(b<c)
  {
     printf("B is small");
  }
  else
  {
     printf("C is small");
  }
  getch();
 }