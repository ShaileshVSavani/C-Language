#include<stdio.h>
#include<conio.h>
main()
{
int a=5, b=10;
clrscr();
printf("value befor swaping:");
printf("%d %d",a,b);
printf("\n");
b=a+b-(a=b);
/*
OR
a=a+b;
b=a-b;
a=a-b;
*/
printf("value after swaping:");
printf("%d %d ",a,b);
getch();

}