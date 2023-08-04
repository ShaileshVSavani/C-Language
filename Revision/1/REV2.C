//WAP to check if number is odd,even or prime number between 1..N sequence.
#include<stdio.h>
#include<conio.h>
main(){
	int n,count=0,i;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	if(n%2==0){
		printf("Enter number is EVEN!!");
	}
	else{
	    for( i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	    }
	    if(count==2){
		printf("Number is Prime Number!!");
	    }
	    else{
		printf("Number is ODD");
	    }
	}
	getch();
}