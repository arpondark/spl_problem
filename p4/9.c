#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int s
    = 0; s < n; s++) {
        double A, HW, CT, MT, TF;
       
        scanf("%lf %lf %lf %lf %lf", &A, &HW, &CT, &MT, &TF);

        
        double totalMarks = (A / 5.0) * 5 + (HW / 10.0) * 10 + (CT / 15.0) * 15 +
                            (MT / 50.0) * 30 + (TF / 100.0) * 40;

        
        char grade;
        if (totalMarks >= 90) grade = 'A';
        else if (totalMarks >= 86) grade = 'A-';
        else if (totalMarks >= 82) grade = 'B+';
        else if (totalMarks >= 78) grade = 'B';
        else if (totalMarks >= 74) grade = 'B-';
        else if (totalMarks >= 70) grade = 'C+';
        else if (totalMarks >= 66) grade = 'C';
        else if (totalMarks >= 62) grade = 'C-';
        else if (totalMarks >= 58) grade = 'D+';
        else if (totalMarks >= 55) grade = 'D';
        else grade = 'F';

        
        printf("Student %d: %c\n", s + 1, grade);
    }

    return 0;
}
