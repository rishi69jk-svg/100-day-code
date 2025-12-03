//Show that enums store integers by printing assigned values.

#include <stdio.h>
enum TestEnum {
    A = 5,
    B = 20,
    C = 100
};
int main() {
    printf("Enum Stored Values:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    return 0;
}
