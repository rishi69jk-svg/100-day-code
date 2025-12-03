//Write a program to REPLACE SPACES WITH HYPHEN IN A STRING.
#include <stdio.h>
int main() {
    char str[100];
    int i;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] == ' ') {
            str[i] = '-';   
        }
    }
    printf("Output: %s", str);
    return 0;
}
