//simple interest
#include<stdio.h>
#include<conio.h>
main()
{
int p,t;
float r,si;
clrscr();
printf("Enter Pricipal Amount:");
scanf("%d",&p);
printf("Enter Time Duration:");
scanf("%d",&t);
printf("Enter Rate of Interest:");
scanf("%f",&r);
si=(p*t*r)/100;
printf("Simple Interest is;%.2f",si);
getch();
}