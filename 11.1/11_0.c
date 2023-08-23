#include<stdio.h>
void main(){
	int a=10;
	int *b;
	
	b=&a;
	
	printf("a:%d\n",a);
	printf("b:%d\n",*b);
	
	a=5;
	printf("\na:%d\n",a);
	printf("b:%d\n",*b);
	
	*b=20;
	printf("\na:%d\n",a);
	printf("b:%d\n",*b);
	
	
	printf("\nSize:%d\n",sizeof(long double));

}
