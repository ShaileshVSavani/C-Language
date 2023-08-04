#include<stdio.h>
#include<conio.h>
main(){
	int i,j,s,space=0,rem=0;
	clrscr();
	for(i=5;i>=1;i--){
		for(s=1;s<=space;s++){
			printf(" ");
		}
		space++;
		for(j=i;j>=1;j--){
			rem=j%2;
			if(rem!=0){
				printf("%d",rem);
			}
			else{
				printf("%d",rem);
			}

		}
		printf("\n");
	}
	getch();
}