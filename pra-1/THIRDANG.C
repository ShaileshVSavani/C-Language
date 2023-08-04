#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
clrscr();
printf("Enter First Angle is a:");
scanf("%d",&a);
printf("Enter Second angle is b:");
scanf("%d",&b);
c=180-(a+b);
printf("Third Angle of Right Triangle c is %d",c);
getch();
}