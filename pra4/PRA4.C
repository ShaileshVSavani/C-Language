#include<stdio.h>
#include<conio.h>
main(){
	int i,j,k=41;
	clrscr();
	for(i=1;i<=5;i++){
		k=41;
		for(j=1;j<=i;j++){
			printf("%d",k);
			k++;
		}
		printf("\n");
	}
	getch();
}