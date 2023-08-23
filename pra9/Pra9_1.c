/*Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.
For example, 
Output:
Even numbers from even_file.txt:
50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70

Odd numbers from odd_file.txt:
51, 53, 55, 57, 59, 61, 63, 65, 67, 69*/
#include<stdio.h>
void main(){
	FILE *fp2,*fp1;
	fp1=fopen("C:\\Users\\r32\\Desktop\\fp1.txt","w");
	fp2=fopen("C:\\Users\\r32\\Desktop\\fp2.txt","w");
	
		if(fp1 && fp2==NULL){
		printf("File opening failed!!");
		return;
	}
	int i;
	for(i=50;i<=70;i++){
		if(i%2==0){
			fprintf(fp1,"%d ",i);
		}
		else{
			fprintf(fp2,"%d ",i);
		}
	}
	fclose(fp1);
	fclose(fp2);

}
