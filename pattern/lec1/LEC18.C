#include<stdio.h>
#include<conio.h>
main(){
	int i,j,rem=0 ;
	clrscr();
	for(i=1;i<=4;i++){
		for(j=0;j<=i;j++){
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

