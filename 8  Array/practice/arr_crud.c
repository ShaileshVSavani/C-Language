/*
1. 1D array 
       Input size of array 
       Insert array elements 
       1. Sorting
             1.ascending
              2. Depending
              3. Display
        2. CRUD
             1. Insertion
              2. Deletion 
              3. Updation
              4. Display 
 
2.  2D array 
      Row size
      Column size
      Insert array elements 
     1. Diagonal sum
      2. Anti diagonal sum
      3 cross diagonal sum
     4. Row wise sum
     5.  Columns wise sum */
     
#include <stdio.h>

int main() {
    int choice, i, j;
    int arr1D[100], arr2D[100][100], n, rows, columns;

    printf("Select the array type:\n");
    printf("1. 1D array\n");
    printf("2. 2D array\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // 1D array operations
            printf("Enter the size of the 1D array: ");
            scanf("%d", &n);

            printf("Enter the elements of the 1D array:\n");
            for (i = 0; i < n; i++) {
                scanf("%d", &arr1D[i]);
            }

            do {
                printf("\n1. Sorting\n");
                printf("2. CRUD\n");
                printf("3. Display\n");
                printf("4. Exit\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                int temp, pos, element;

                switch (choice) {
                    case 1:
                        printf("\n1. Ascending\n");
                        printf("2. Descending\n");
                        printf("Enter your choice: ");
                        scanf("%d", &choice);

                        for (i = 0; i < n; i++) {
                            for (j = i + 1; j < n; j++) {
                                if (choice == 1) {
                                    if (arr1D[i] > arr1D[j]) {
                                        temp = arr1D[i];
                                        arr1D[i] = arr1D[j];
                                        arr1D[j] = temp;
                                    }
                                } else if (choice == 2) {
                                    if (arr1D[i] < arr1D[j]) {
                                        temp = arr1D[i];
                                        arr1D[i] = arr1D[j];
                                        arr1D[j] = temp;
                                    }
                                }
                            }
                        }

                        printf("Sorted array:\n");
                        for (i = 0; i < n; i++) {
                            printf("%d ", arr1D[i]);
                        }
                        printf("\n");
                        break;

                    case 2:
                        printf("\n1. Insertion\n");
                        printf("2. Deletion\n");
                        printf("3. Updation\n");
                        printf("Enter your choice: ");
                        scanf("%d", &choice);

                        switch (choice) {
                            case 1:
                                printf("Enter the position and element to be inserted: ");
                                scanf("%d %d", &pos, &element);

                                if (pos >= 0 && pos <= n) {
                                    for (i = n - 1; i >= pos; i--) {
                                        arr1D[i + 1] = arr1D[i];
                                    }
                                    arr1D[pos] = element;
                                    n++;
                                } else {
                                    printf("Invalid position!\n");
                                }
                                break;

                            case 2:
                                printf("Enter the position of the element to be deleted: ");
                                scanf("%d", &pos);

                                if (pos >= 0 && pos < n) {
                                    for (i = pos; i < n - 1; i++) {
                                        arr1D[i] = arr1D[i + 1];
                                    }
                                    n--;
                                } else {
                                    printf("Invalid position!\n");
                                }
                                break;

                            case 3:
                                printf("Enter the position and new element: ");
                                scanf("%d %d", &pos, &element);

                                if (pos >= 0 && pos < n) {
                                    arr1D[pos] = element;
                                } else {
                                    printf("Invalid position!\n");
                                }
                                break;

                            default:
                                printf("Invalid choice for CRUD operation!\n");
                                break;
                        }
                        break;

                    case 3:
                        printf("Array elements:\n");
                        for (i = 0; i < n; i++) {
                            printf("%d ", arr1D[i]);
                        }
                        printf("\n");
                        break;

                    case 4:
                        printf("Exiting...\n");
                        break;

                    default:
                        printf("Invalid choice!\n");
                        break;
                }
            } while (choice != 4);
            break;

        case 2:
            // 2D array operations
            printf("Enter the number of rows: ");
            scanf("%d", &rows);

            printf("Enter the number of columns: ");
            scanf("%d", &columns);

            printf("Enter the elements of the 2D array:\n");
            for (i = 0; i < rows; i++) {
                for (j = 0; j < columns; j++) {
                    scanf("%d", &arr2D[i][j]);
                }
            }

            do {
                printf("\n1. Diagonal sum\n");
                printf("2. Anti-diagonal sum\n");
                printf("3. Cross-diagonal sum\n");
                printf("4. Row-wise sum\n");
                printf("5. Column-wise sum\n");
                printf("6. Exit\n");
                printf("Enter your choice: ");
                scanf("%d", &choice);

                int sum = 0;

                switch (choice) {
                    case 1:
                        for (i = 0; i < rows; i++) {
                            sum += arr2D[i][i];
                        }
                        printf("Diagonal sum: %d\n", sum);
                        break;

                    case 2:
                        for (i = 0; i < rows; i++) {
                            sum += arr2D[i][columns - i - 1];
                        }
                        printf("Anti-diagonal sum: %d\n", sum);
                        break;

                    case 3:
                        for (i = 0; i < rows; i++) {
                            for (j = 0; j < columns; j++) {
                                if (i == j || j == columns - i - 1) {
                                    sum += arr2D[i][j];
                                }
                            }
                        }
                        printf("Cross-diagonal sum: %d\n", sum);
                        break;

                    case 4:
                        for (i = 0; i < rows; i++) {
                            sum = 0;
                            for (j = 0; j < columns; j++) {
                                sum += arr2D[i][j];
                            }
                            printf("Sum of row %d: %d\n", i + 1, sum);
                        }
                        break;

                    case 5:
                        for (j = 0; j < columns; j++) {
                            sum = 0;
                            for (i = 0; i < rows; i++) {
                                sum += arr2D[i][j];
                            }
                            printf("Sum of column %d: %d\n", j + 1, sum);
                        }
                        break;

                    case 6:
                        printf("Exiting...\n");
                        break;

                    default:
                        printf("Invalid choice!\n");
                        break;
                }
            } while (choice != 6);
            break;

        default
