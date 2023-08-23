 #include<stdio.h>
 void main(){
 	FILE *fp;
 	int n,i;
 	//fp=fopen("C:\\Users\\r32\\Desktop\\123.txt","w");
 	fp=fopen("C:\\Users\\mis\\Desktop\\fp.txt","w");
 	for(i=1;i<=50;i++){
 		if(i%3==0 && i%5==0){
 			fprintf(fp,"%d ",i);
		 }
	 }
	 fclose(fp);
 }
