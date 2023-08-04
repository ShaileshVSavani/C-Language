#include<stdio.h>
#include<conio.h>
main()

{
float b,h,area;
clrscr();
printf("Enter base of triangle:");
scanf("%f",&b);
printf("Enter heighy of triangle:");
scanf("%f",&h);
area=0.5*b*h;
printf("Area of triangle is:%.2f",area);
getch();
}