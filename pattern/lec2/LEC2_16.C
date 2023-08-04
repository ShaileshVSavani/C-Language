#include<stdio.h>
#include<conio.h>
main(){
	int i,j,s,space=0;
	clrscr();
	for(i='A';i<='E';i++){
		for(s=1;s<=space;s++){
			printf(" ");
		}
		space++;
		for(j=i;j<='E';j++){
			printf("%c",j);
		}
		printf("\n");
	}
	getch();
}