//WAP to check if the alphabet is vovel or consonant between n1 to n2
//character.
#include<stdio.h>
#include<conio.h>
main(){
	int n1,n2,i;
	char ch;
	clrscr();
	printf("Enter Starting character:");
	scanf("%c",&n1);
	printf("Enter Ending character:");
	scanf("%c",&n2);
       //	printf("\nEnter Range:");
       //	scanf("%d %d",&n1,&n2);
	printf("\nCharacter beteen %c and %c:",n1,n2);

	if(n1<n2){
	      for(ch=n1;ch<n2;ch++){

		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
			printf("%c is vovel\n",ch);
		}
		else{
			printf("%c is consonant\n",ch);
		}
	      }
	}
	else{
		printf("Invalid Range!!\n");
	}


	getch();

}