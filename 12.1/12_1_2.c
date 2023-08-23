/*Q.2 Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
- emp_id
- emp_name
- emp_age
- emp_role
- emp_city
- emp_experience
- emp_company_name*/
#include<stdio.h>
struct Employee{
	int emp_id;
	char emp_name[25];
	int emp_age;
	int emp_roll;
	char emp_city[25];
	int emp_experience;
	char emp_company_name[50];
	
};
void main(){
	int i,n;
	printf("Enter numbers of employee:");
	scanf("%d",&n);
	
	struct Employee emp[n];
	
	for(i=0;i<n;i++){
			printf("\nEnter id\t:");
			scanf("%d",&emp[i].emp_id);
			fflush(stdin);
			printf("Enter Name\t:");
			gets(emp[i].emp_name);
			printf("Enter age\t:");
			scanf("%d",&emp[i].emp_age);
			printf("Enter Roll\t:");
			scanf("%d",emp[i].emp_roll);	
			printf("Enter City\t:");
			fflush(stdin);
			gets(emp[i].emp_city);
			printf("Enter Experience\t:");
			scanf("%d",&emp[i].emp_experience);
			fflush(stdin);
			printf("Enter Company Name\t:");
			gets(emp[i].emp_company_name);
	}
		printf("\n\n\nId\tName\tAge\tRoll\tCity\tExperience\tCompany\n===\t=====\t======\t======\t======\t========\t========\n");
		for(i=0;i<3;i++){
		printf("%d\t%s\t%d\t%d\t%s\t%d\t\t%s\n",emp[i].emp_id,emp[i].emp_name,emp[i].emp_age,emp[i].emp_roll,emp[i].emp_city,emp[i].emp_experience,emp[i].emp_company_name);	
		}
}
