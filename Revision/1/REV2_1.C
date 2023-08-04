//WAP to check if number is odd,even or prime number between 1..N sequence.
#include<stdio.h>
#include<conio.h>
main(){
	int count=0,i,j,n;
	clrscr();
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Even numbers are:");
	for(i=1;i<=n;i++){
		if(i%2==0){
			printf(" %d ",i);
		}
	}
	printf("\nODD numbers are:");
	for(i=1;i<=n;i++){
		if(i%2!=0){
			printf(" %d ",i);
		}
	}
	printf("\nPrime numbers are:");
	for( i=2;i<=n;i++){
		int isPrime=1;
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				isPrime=0;
			       //	count++;
				break;

			}
		}

		if(isPrime==1){
			printf(" %d ",i);

		}
	}

	getch();
}