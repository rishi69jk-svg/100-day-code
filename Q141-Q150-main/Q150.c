//Use pointer to struct to modify and display data using -> operator.

#include <stdio.h>
struct Student {
    int roll;
    char name[30];
    float marks;
};
void modify(struct Student *s) {
    s->roll = 101;
    s->marks = 92.5;
}
int main() {
    struct Student stu;  
    struct Student *ptr = &stu; 
    printf("Enter name: ");
    scanf("%s", ptr->name);
    modify(ptr);
    printf("\n--- Student Details ---\n");
    printf("Name : %s\n", ptr->name);
    printf("Roll : %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);
    return 0;
}
