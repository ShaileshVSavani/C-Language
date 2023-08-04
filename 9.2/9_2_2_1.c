#include <stdio.h>
#include <string.h>

int main() {
    // Desired email and password for comparison
    char desired_email[] = "admin@gmail.com";
    char desired_password[] = "123456";

    // Input email and password from the user
    char input_email[100];
    char input_password[100];

    printf("Enter your email: ");
    scanf("%s", input_email);

    printf("Enter your password: ");
    scanf("%s", input_password);

    // Check if the input credentials match the desired credentials using strcmp()
    if (strcmp(input_email, desired_email) == 0 && strcmp(input_password, desired_password) == 0) {
        printf("Login Successful...\n");
    } else {
        printf("Login Failed. Invalid Credentials.\n");
    }

    return 0;
}

