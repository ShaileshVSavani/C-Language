#include <stdio.h>

int main() {
    int row, col;
    printf("Enter the array's row size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("\nEnter array's elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the array
    printf("\nThe array elements are:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Sum and print elements of a row
    int rowNumber, sumRow = 0;
    printf("\nEnter row number: ");
    scanf("%d", &rowNumber);

    printf("Elements of row %d: ", rowNumber);
    for (int j = 0; j < col; j++) {
        printf("%d", arr[rowNumber][j]);
        sumRow += arr[rowNumber][j];
        if (j < col - 1) {
            printf(", ");
        }
    }
    printf("\n");
    printf("The sum of a row %d: %d\n", rowNumber, sumRow);

    // Sum and print elements of a column
    int colNumber, sumCol = 0;
    printf("\nEnter column number: ");
    scanf("%d", &colNumber);

    printf("Elements of column %d: ", colNumber);
    for (int i = 0; i < row; i++) {
        printf("%d", arr[i][colNumber]);
        sumCol += arr[i][colNumber];
        if (i < row - 1) {
            printf(", ");
        }
    }
    printf("\n");
    printf("The sum of column %d: %d\n", colNumber, sumCol);

    return 0;
}

