/*Q.1 Write a Program to read content from one file & write it to another file*/

#include<stdio.h>
void main(){
	FILE *fp,*db;
	int n;
	
	fp=fopen("C:\\Users\\r32\\Desktop\\fp.txt","r");
	db=fopen("C:\\Users\\r32\\Desktop\\db.txt","w");
	if(fp==NULL){
		printf("File opening failed!!");
		return;
	}

	fscanf(fp,"%d",&n);
	printf("n=%d",n);
	fprintf(db,"%d",n);
	fclose(fp);
	fclose(db);
	
}
