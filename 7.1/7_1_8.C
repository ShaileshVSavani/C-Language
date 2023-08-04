

#include<stdio.h>
#include<conio.h>
main(){
	int i,j,row=1 ;
	clrscr();

	for(i=1;i<=5;i++){

		for(j=1;j<=i;j++){
		   printf(" %4d ",row);
		   row++;
		}

		printf("\n");
	}
	getch();
}

