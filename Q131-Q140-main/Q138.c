//Print all enum names and integer values using a loop.

#include <stdio.h>
enum Role {
    ADMIN = 0,
    USER,
    GUEST
};
int main() {
    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};
    int count = sizeof(roleNames) / sizeof(roleNames[0]);
    printf("Enum values:\n");
    for (int i = 0; i < count; i++) {
        printf("%s = %d\n", roleNames[i], i);
    }
    return 0;
}
