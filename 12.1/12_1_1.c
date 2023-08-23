/*Q.1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_standard
- stu_school*/

#include<stdio.h>
struct Student{
	int id;
	char name[25];
	int age;
	char course[50];
	char city[20];
	int standard;
	char school[30];
};
void main(){
	int i;
	
	struct Student stud[3];
	
	for(i=0;i<3;i++){
			printf("\nEnter id\t:");
			scanf("%d",&stud[i].id);
			fflush(stdin);
			printf("Enter Name\t:");
			gets(stud[i].name);
			printf("Enter age\t:");
			scanf("%d",&stud[i].age);
			printf("Enter Course\t:");
			fflush(stdin);
			gets(stud[i].course);	
			printf("Enter City\t:");
			gets(stud[i].city);
			printf("Enter Standard\t:");
			scanf("%d",&stud[i].standard);
			printf("Enter School\t:");
			fflush(stdin);
			gets(stud[i].school);
		}
	
		printf("\n\n\nId\tName\tAge\tCourse\tCity\tStandard\tSchool\n===\t=====\t======\t======\t======\t========\t========\n");
		for(i=0;i<3;i++){
		printf("%d\t%s\t%d\t%s\t%s\t%d\t\t%s\n",stud[i].id,stud[i].name,stud[i].age,stud[i].course,stud[i].city,stud[i].standard,stud[i].school);	
		}
	
}

