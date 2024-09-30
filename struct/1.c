#include <stdio.h>

struct Student {
    char name[50];
    char studentID[15];
    float CGPA;
};

int main() {
    
    struct Student student;
    gets(student.name);
    scanf("%s", student.studentID);
    scanf("%f", &student.CGPA);

    
    printf("Name: %s\n", student.name);
    printf("Student ID: %s\n", student.studentID);
    printf("CGPA: %.2f\n", student.CGPA);

    return 0;
}
