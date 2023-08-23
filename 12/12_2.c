#include<stdio.h>
#include<string.h>
struct Subject{
	int sci, ss, maths, eng, guj;
};
struct Student{
	int id;
	char name[20];
	//Nested structure
	struct Subject sub;
	float per;
	char grade;
};
void main(){
	struct Student stud;
	
	printf("Enter id\t:");
	scanf("%d",&stud.id);
	printf("Enter Name\t:");
	fflush(stdin);
	gets(stud.name);
	
	printf("Enter sci marks\t:");
	scanf("%d",&stud.sub.sci);
	printf("Enter ss marks\t:");
	scanf("%d",&stud.sub.ss);
	printf("Enter maths marks:");
	scanf("%d",&stud.sub.maths);
	printf("Enter eng marks\t:");
	scanf("%d",&stud.sub.eng);
	printf("Enter guj marks\t:");
	scanf("%d",&stud.sub.guj);

	stud.per=(stud.sub.sci+stud.sub.ss+stud.sub.maths+stud.sub.eng+stud.sub.guj)/5.0;
	
	printf("\nId\t:%d\n",stud.id);
	printf("Name\t:%s\n",stud.name);
	printf("Per\t:%.2f\n",stud.per);

}
