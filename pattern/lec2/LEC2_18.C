#include<stdio.h>
#include<conio.h>
main(){
	int i,j,s,space=4,rem=0;
	clrscr();
	for(i=5;i>=1;i--){
		for(s=1;s<=space;s++){
			printf(" ");
		}
		space--;
		for(j=i;j<=5;j++){
			rem=i%2;
			if(i%2!=0){
			printf("%d",rem);
			}
			else if(i%2==0){
			printf("%d",rem);
			}
		}
		printf("\n");
	}
	getch();
}