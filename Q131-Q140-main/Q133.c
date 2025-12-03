//Create an enum for months and print how many days each month has.

#include <stdio.h>
enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};
int main() {
    enum Month m;
    m = FEBRUARY;
    switch (m) {
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            printf("31 days\n");
            break;
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            printf("30 days\n");
            break;
        case FEBRUARY:
            printf("28 or 29 days (leap year)\n");
            break;
        default:
            printf("Invalid month\n");
    }
    return 0;
}
