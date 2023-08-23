/*Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
For example,
Input:
Enter array size: 5
Enter array elements:
a[0] = 6
a[1] = 4
a[2] = 1
a[3] = 5
a[4] = 2

Output:
The sum of an Array: 18*/
#include <stdio.h>

void inputArray(int arr[], int size, int index) {
    if (index == size) {
        return;
    }
    printf("a[%d] = ", index);
    scanf("%d", &arr[index]);
    inputArray(arr, size, index + 1);
}

int sumArray(int arr[], int size, int index) {
    if (index == size) {
        return 0;
    }
    return arr[index] + sumArray(arr, size, index + 1);
}

int main() {
    int size, i;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter array elements:\n");
    inputArray(arr, size, 0);

    int result = sumArray(arr, size, 0);
    printf("The sum of an Array: %d\n", result);

    return 0;
}

