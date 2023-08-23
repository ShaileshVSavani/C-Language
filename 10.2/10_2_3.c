/*
Q.3 Write a program to check id the password is valid or not by creating 'validatePsw()' function.*/
#include <stdio.h>

int stringLength(char str[], int i) {
    if (str[i] == '\0') {
        return i;
    }
    return stringLength(str, i + 1);
}

int hasUpperCase(char str[], int i) {
    if (str[i] == '\0') {
        return 0;
    }
    if (str[i] >= 'A' && str[i] <= 'Z') {
        return 1;
    }
    return hasUpperCase(str, i + 1);
}

int hasLowerCase(char str[], int i) {
    if (str[i] == '\0') {
        return 0;
    }
    if (str[i] >= 'a' && str[i] <= 'z') {
        return 1;
    }
    return hasLowerCase(str, i + 1);
}

int hasDigit(char str[], int i) {
    if (str[i] == '\0') {
        return 0;
    }
    if (str[i] >= '0' && str[i] <= '9') {
        return 1;
    }
    return hasDigit(str, i + 1);
}

int validatePsw(char password[]) {
    int length = stringLength(password, 0);
    int hasUpperCaseLetter = hasUpperCase(password, 0);
    int hasLowerCaseLetter = hasLowerCase(password, 0);
    int hasDigitChar = hasDigit(password, 0);

    if (length < 8 || !hasUpperCaseLetter || !hasLowerCaseLetter || !hasDigitChar) {
        return 0;
    }

    return 1;
}

int validateID(char id[]) {
	int length,i;
    length = stringLength(id, 0);

    if (length < 6) {
        return 0;
    }

    for (i = 0; i < length; i++) {
        char ch = id[i];
        if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char password[100];
    char id[100];

    printf("Enter the ID: ");
    scanf("%s", id);

    printf("Enter the password: ");
    scanf("%s", password);

    if (validateID(id) && validatePsw(password)) {
        printf("ID and password are valid.\n");
    } else {
        printf("ID and/or password are not valid.\n");
    }

    return 0;
}

