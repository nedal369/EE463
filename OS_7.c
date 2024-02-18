#include <stdio.h>

// Define a struct to represent a student
typedef struct {
    char name[50];
    int grade;
} Student;

int main() {
    // Initialize an array of 10 students
    Student students[10];
    
    // Input the student names and grades
    for (int i = 0; i < 10; ++i) {
        printf("Enter the name for student %d: ", i + 1);
        scanf("%49s", students[i].name); // Using %49s to prevent buffer overflow
        printf("Enter the grade for student %d: ", i + 1);
        scanf("%d", &students[i].grade);
    }
    
    // Print the student names and grades
    printf("\nStudent Grades:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%s: %d\n", students[i].name, students[i].grade);
    }
    
    return 0;
}
