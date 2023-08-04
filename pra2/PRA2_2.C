#include<stdio.h>
#include<conio.h>
main()
{
	float units,surcharge,total_bill,bill;
	clrscr();
	printf("Enter Units:");
	scanf("%f",&units);
	if(units<=50)
	  bill=50*0.50;
	else if(units>=51&&units<=150)
	  bill= (50*0.50)+(units-50)*0.75;
	else if(units>=151&&units<=250)
	  bill=(50*0.50)+(100*0.75)+(units-50-100)*1.20;
	else if(units>=250)
	  bill=25+75+120+(units-250)*1.50;
	 surcharge=bill*0.20;
	 total_bill=bill+surcharge;
	 printf("Total Electricity Bill is:%.2f",total_bill);
	 getch();
}
