

#include<stdio.h>
#include<conio.h>
main(){
	int i,j,row='A' ;
	clrscr();
	for(i='A';i<='O';i++){
		for(j='A';j<=i;j++){
		  printf("%c ",row++);

		}
		 if(row=='P'){
			break;
		  }
		printf("\n");
	}

	getch();
}

