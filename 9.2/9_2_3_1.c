#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str);

    int length = strlen(str);
    int isPalindrome = 1; // Assume the string is a palindrome initially

    // Compare characters from the beginning of the string using 'i'
    for (i = 0; i < length / 2; i++) {
        // Compare characters from the end of the string using 'j'
        j = length - i - 1;
        if (str[i] != str[j]) {
            isPalindrome = 0; // If characters don't match, set isPalindrome to 0
            break;
        }
    }

    // Check and print the result
    if (isPalindrome) {
        printf("The string is a Palindrome.\n");
    } else {
        printf("The string is not a Palindrome.\n");
    }

    return 0;
}

