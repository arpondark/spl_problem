#include <stdio.h>

void InputMatrix(int matrix[][100], int m, int n) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void ShowMatrix(int matrix[][100], int m, int n) {
    printf("Original:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void ScalarMultiply(int matrix[][100], int m, int n, int scalar) {
    printf("Multiplied by %d:\n", scalar);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] *= scalar;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n, scalar;

    
    scanf("%d %d", &m ,&n);

    

    int matrix[m][100];

    InputMatrix(matrix, m, n);
    scanf("%d", &scalar);
    ShowMatrix(matrix, m, n);

    
    

    ScalarMultiply(matrix, m, n, scalar);

    return 0;
}