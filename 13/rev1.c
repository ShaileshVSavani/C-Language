#include<stdio.h>
struct student{
	int id;
	char name[20];
	float per;
};
void main(){
	FILE *fp,*db;
	fp=fopen("C:\\Users\\mis\\Desktop\\fp1.txt","w");
//	db=fopen("C:\\Users\\mis\\Desktop\\db.txt","w");
		if(fp==NULL){
		printf("File opening failed!!");
		return;
	}
	struct student s;
	printf("Enter id:");
	scanf("%d",&s.id);
	printf("Enter name:");
	fflush(stdin);
	gets(s.name);
	//scanf("%s",s.name);
	printf("Enter per:");
	scanf("%f",&s.per);
	
	fprintf(fp,"%d  %s  %.2f",s.id,s.name,s.per);
	fclose(fp);
}
