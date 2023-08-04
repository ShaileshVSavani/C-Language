#include<stdio.h>
#include<conio.h>
main()
{
float bs, hra, da, ta, gs;
clrscr();
printf("Enter Base Salary:");
scanf("%f",&bs);
printf("Enter HRA:");
scanf("%f",&hra);
hra=bs*hra/100;
printf("HRA on Base Salary is %.2f:\n",hra);
printf("Enter DA:");
scanf("%f",&da);
da=bs*da/100;
printf("Enter TA:");
scanf("%f",&ta);
ta=bs*ta/100;
gs=bs+hra+da+ta;
printf("Gross Salary is %.2f:",gs);
getch();
}