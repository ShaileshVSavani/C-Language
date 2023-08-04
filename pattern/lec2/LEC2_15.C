#include<stdio.h>
#include<conio.h>
main(){
	int i,j,s,space=0;
	clrscr();
	for(i='E';i>='A';i--){
		for(s=1;s<=space;s++){
			printf(" ");
		}
		space++;
		for(j='A';j<=i;j++){
			printf("%c",j);
		}
		printf("\n");
	}
	getch();
}