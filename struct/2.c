#include <stdio.h>

struct Student
{
    char name[50];
    char studentID[15];
    float CGPA;
};

int main()
{
    int n;
   
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++)
    {

        scanf("%s", students[i].name);

        scanf("%s", students[i].studentID);

        scanf("%f", &students[i].CGPA);
    }

    for (int i = 0; i < n; i++)
    {
        printf("\nStudent %d: %s\n", i + 1, students[i].name);
        printf("Student ID: %s\n", students[i].studentID);
        printf("CGPA: %.2f\n", students[i].CGPA);
    }

    return 0;
}
