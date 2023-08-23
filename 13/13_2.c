/*Q.2 Write a Program to create a new file and
 write all numbers that are divisible by 
 both 3 & 5 between 1 to 50 into that file.*/
 
 #include<stdio.h>
 void main(){
 	FILE *fp;
 	int n,i;
 	fp=fopen("C:\\Users\\r32\\Desktop\\123.txt","w");
 	for(i=1;i<=50;i++){
 		if(i%3==0 && i%5==0){
 			fprintf(fp,"%d ",i);
		 }
	 }
	 fclose(fp);
 }
