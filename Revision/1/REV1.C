//WAP to check if the given number is palindrom or not.

#include<stdio.h>
#include<conio.h>
main ()
{
  int n,rem,rev=0,n1;
  clrscr();

  printf("Enter number:");
  scanf("%d",&n);
  n1=n;
  while(n1!=0){
	rem=n1%10;
	rev=rev*10+rem;
	n1=n1/10;
  }
  printf("Reverse number is %d\n", rev);

  if(n==rev){
	printf("Number is Palindrome number");
  }
  else{
	printf("Number is not Palindrome number");
  }
  getch();
}