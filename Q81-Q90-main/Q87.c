//Write a program to COUNT DIGITS, AND SPECIAL CHARACTERS IN A STRING.
#include <stdio.h>
int main() {
    char str[200];
    int spaces = 0, digits = 0, special = 0;
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch == ' ') {
            spaces++;
        }
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        }
        else {
            special++;
        }
    }
    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);
    return 0;
}
