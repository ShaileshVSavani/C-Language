#include<stdio.h>
#include<conio.h>
main()
{float r,perimeter,pi=3.14;
clrscr();
printf("Enter Radius of Circle:");
scanf("%f",&r);
perimeter=2*pi*r;
printf("Perimeter of Circle is:%.2f",perimeter);
getch();

}