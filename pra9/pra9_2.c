/*Q.2 Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.
For example,
Input:
Enter details of Student 1:
Roll no => 121
Name => Raj Patel
Chemistry => 95
Mathematics => 90
Physics => 88

Enter details of Student 2:
Roll no => 122
Name => Divya Sharma
Chemistry => 92
Mathematics => 80
Physics => 84

Enter details of Student 3:
Roll no => 123
Name => Piyush Mishra
Chemistry => 72
Mathematics => 87
Physics => 93

Enter details of Student 4:
Roll no => 124
Name => Vatsal Mangukiya
Chemistry => 68
Mathematics => 96
Physics => 85

Enter details of Student 5:
Roll no => 125
Name => Sagar Trivedi
Chemistry => 91
Mathematics => 89
Physics => 77

Output:
Raj Patel (121)
Chemistry => 95
Mathematics => 90
Physics => 88
Total => 273/300
Percent => 91.00%

Divya Sharma (122)
Chemistry => 92
Mathematics => 80
Physics => 84
Total => 256/300
Percent => 85.33%

Piyush Mishra (123)
Chemistry => 72
Mathematics => 87
Physics => 93
Total => 252/300
Percent => 84.00%

Vatsal Mangukiya (124)
Chemistry => 68
Mathematics => 96
Physics => 85
Total => 249/300
Percent => 83.00%

Sagar Trivedi (125)
Chemistry => 91
Mathematics => 89
Physics => 77
Total => 257/300
Percent => 85.66%*/
#include<stdio.h>

struct student
{
	int roll_no;
	char name[50];
	float chem_marks,maths_marks,phy_marks;
};

void main()
{
	struct student rollno[5],name[5],marks[5];
	int i,sum;
	
	
	for(i=0;i<4;i++)
	{
		printf("\nEnter the roll no :- ");
		scanf("%d",&rollno[i].roll_no);
		
		printf("Enter the student name :- ");
		scanf("%s",&name[i].name);
		
		printf("Enter the chemistry marks :- ");
		scanf("%f",&marks[i].chem_marks);
		
		printf("Enter the maths marks :- ");
		scanf("%f",&marks[i].maths_marks);
		
		printf("Enter the physics marks :- ");
		scanf("%f",&marks[i].phy_marks);
		
		float percentage;
		
		percentage = (marks[i].chem_marks + marks[i].maths_marks + marks[i].phy_marks)/300.0*100;
		
		printf("Percentage :- %0.2f\n",percentage);
	}
}
