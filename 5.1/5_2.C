#include<stdio.h>
#include<conio.h>
main()
{
int a;
clrscr();
printf("Enter a number:");
scanf("%d",&a);
if(a>0)
{
printf("Number is POSITIVE!!");
}
else if(a==0){
printf("Number is NEUTRAL!!");
}
else
{
printf("Number is NEGETIVE!!");
}
getch();
}