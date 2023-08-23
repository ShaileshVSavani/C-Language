/*Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF.For example,
Input:
Enter any string: development

Output:
Length is: 11*/

#include <stdio.h>

// Function to calculate the length of a string
int stringLength( char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char String[100];
    int length;
    printf("Enter any string: ");
    scanf("%s", String);
    
    length = stringLength(String);
    
    printf("Length is: %d\n", length);
    
    return 0;
}

