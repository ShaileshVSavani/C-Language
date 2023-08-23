 #include<stdio.h>
void display(int a[],int n){
	int i;
    printf("Array is:");
	for(i=0;i<n;i++){
		 printf("%d ",a[i]);
		 //scanf("%d",&a[i]);
		   
	}
	printf("\n");
}

void ascend(int a[],int n){
	printf("Array after sorting in ascending order:");
	int i, j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
			printf("%d ",a[i]);
	}
}
void descend(int a[],int n){
	printf("\nArray after sorting in descending order:");
	int i, j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				a[i]=a[i]+a[j];
				a[j]=a[i]-a[j];
				a[i]=a[i]-a[j];
			}
		}
		printf("%d ",a[i]);
	}
}

void insert(int a[],int n){
	int i,pos,val;
	printf("\nEnter value:");
	scanf("%d",&val);
	
	printf("\nEnter position:");
	scanf("%d",&pos);
	
	for(i=n;i>pos;i--){
		a[i]=a[i-1];
	}
	 a[i]=val;
	 n++;
	 printf("\nNew array is:");
	 for(i=0;i<n;i++){
	 	printf("%d ",a[i]);
	 }	
}

void delete(int a[],int n){
	int i,pos,val;
	printf("\nEnter position:");
	scanf("%d",&pos);
	
	for(i=pos;i<n;i++){
		a[i]=a[i+1];
	}
	 n--  ;
	 printf("\nNew array is:");
	 for(i=0;i<n;i++){
	 	printf("%d ",a[i]);
	 }	
}

void update(int a[], int n){
	int i,pos,val;
	printf("Enter the position and new element's value: ");
    scanf("%d %d", &pos, &val);

    if (pos >= 0 && pos < n) {
        a[pos] = val;
    } else {
           printf("Invalid position!\n");
    }
    printf("\nNew array is:");
	 for(i=0;i<n;i++){
	 	printf("%d ",a[i]);
	 }
	  printf("\n");
}

void avg(int a[],int n){
	float avg;
	int i,sum=0;
	for(i=0;i<n;i++){
		printf("a[%d]: %d\n",i,a[i]);
			sum+=a[i];
			avg=sum/(float)n;
	}
	printf("Sum is %d\n",sum);
	printf("Average of 1D Array is %.2f",avg);
}

void array(int a[], int n){
	int choice;
	do{
        printf("\n1. Sorting\n");
        printf("2. CRUD\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        int pos, element;

        switch (choice) {
                case 1:
                    printf("\n1. Ascending\n");
                    printf("2. Descending\n");
                    printf("Enter your choice: ");
                    scanf("%d", &choice);
                    switch(choice){
                    	case 1:
                    		ascend(a,n);
                    		break;
                    	case 2:
                    		descend(a,n);
                    		break;
                    	 default:
                            printf("Invalid choice!\n");
                            break;
                        }
                    break;

                case 2:
                    printf("\n1. Insertion\n");
                    printf("2. Deletion\n");
                    printf("3. Updation\n");
                     printf("4. Average\n");
                    printf("Enter your choice: ");
                    scanf("%d", &choice);

                    switch (choice) {
                        case 1:
                        	insert(a,n);
                        	break;
                        	
                        case 2:
                        	delete(a,n);
                        	break;
                            
                         case 3:
                         	update(a,n);
                            break;
                         case 4:
                         	avg(a,n);
                            break;

                         default:
                            printf("Invalid choice!\n");
                            break;
                        }
                        break;

                    case 3:
                      	display(a,n);
                        break;

                    case 4:
                        printf("Exiting...\n");
                        break;

                    default:
                        printf("Invalid choice!\n");
                        break;
		
	}
  }while(choice!=4);
}

