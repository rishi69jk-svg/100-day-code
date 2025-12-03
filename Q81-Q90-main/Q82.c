//Write a program  TO PRINT EACH CHARACTER OF A STRING ON A NEW LINE.
#include <stdio.h>
int main() {
    char str[100];
    scanf("%[^\n]", str);
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }
    return 0;
}

