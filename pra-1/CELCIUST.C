#include<stdio.h>
#include<conio.h>
main()
{
float c,f;
clrscr();
printf("Enter Temperature in Celcius:");
scanf("%f",c);
f=(c*9/5)+32;
printf("Temperature from celcius to Fahreinheit is %f:",f);
getch();
}