#include<stdio.h>
#include<conio.h>
main(){
	int i,j,s,space=4;
	clrscr();
	for(i='A';i<='E';i++){
		for(s=1;s<=space;s++){
			printf(" ");
		}
		space--;
		for(j=i;j>='A';j--){
			printf("%c",j);
		}
		printf("\n");
	}
	getch();
}