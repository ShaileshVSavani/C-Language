#include<stdio.h>
#include<conio.h>
main(){
	int i,j,rem=0 ;
	clrscr();
	for(i=5;i>=1;i--){
		for(j=i;j>=1;j--){
			rem=j%2;

			if(j%2!=0){
			printf("%d ",rem);
			}
			else if(j%2==0){
				printf("%d ",rem);
			}
		}
		printf("\n");
	}
	getch();
}

