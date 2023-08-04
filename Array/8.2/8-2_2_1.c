#include <stdio.h>

int main() {
    int startYear, endYear, i;
    int leapYears[100];  // Assuming a maximum of 100 leap years

    printf("Enter the starting year: ");
    scanf("%d", &startYear);

    printf("Enter the ending year: ");
    scanf("%d", &endYear);

    // Find and store leap years
    int count = 0;
    for (i = startYear; i <= endYear; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
            leapYears[count] = i;
            count++;
        }
    }

    // Print the leap years
    printf("Leap years between %d and %d are:\n", startYear, endYear);
    for (i = 0; i < count; i++) {
        printf("%d ", leapYears[i]);
    }
    printf("\n");

    return 0;
}

