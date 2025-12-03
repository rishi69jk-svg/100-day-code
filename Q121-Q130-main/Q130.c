//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each //record.

#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};
int main() {
    FILE *fp;
    struct Student s;
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Roll Number: ");
        scanf("%d", &s.roll);
        printf("Marks: ");
        scanf("%f", &s.marks);
        fprintf(fp, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }
    fclose(fp);
    printf("\nStudent records saved successfully!\n\n");
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file for reading!\n");
        return 1;
    }
    printf("Reading records from file:\n\n");
    while (fscanf(fp, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name : %s\n", s.name);
        printf("Roll : %d\n", s.roll);
        printf("Marks: %.2f\n\n", s.marks);
    }
    fclose(fp);
    return 0;
}
