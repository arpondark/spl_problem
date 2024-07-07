#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the dimensions (m x n) of the matrix: ");
    scanf("%d %d", &m, &n);

    int matrix[100][100];
    printf("Enter %d x %d integers for the matrix:\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Reverse the matrix by swapping columns
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n / 2; j++) {
            // Swap columns j and n-j-1
            int temp = matrix[i][j];
            matrix[i][j] = matrix[i][n - j - 1];
            matrix[i][n - j - 1] = temp;
        }
    }

    // Display the reversed matrix
    printf("Reversed Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
