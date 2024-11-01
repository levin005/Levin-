#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int marks;
};

void read_student_data(struct Student *students, int index, FILE *fp, int max_students) {
    if (index >= max_students) {
        return; // Base case: stop when we've reached the maximum number of students
    }

    printf("Enter name for student %d: ", index + 1);
    scanf(" %[^\n]s", students[index].name);
    printf("Enter marks for student %d: ", index + 1);
    scanf("%d", &students[index].marks);
    fprintf(fp, "%s %d\n", students[index].name, students[index].marks);

    read_student_data(students, index + 1, fp, max_students); // Recursive call
}

int main() {
    struct Student students[5]; // Fixed size for this example
    FILE *fp;

    fp = fopen("student_data.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    read_student_data(students, 0, fp, 5); // Start recursion from index 0

    fclose(fp);
    printf("Data written to file successfully.\n");
    return 0;
}