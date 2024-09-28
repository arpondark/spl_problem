#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of rows (n): ");
    scanf("%d", &n);
    printf("Enter the number of columns (m): ");
    scanf("%d", &m);

    int A[100][100], B[100][100], C[100][100];

    // Input for matrix A
    printf("Enter elements for matrix A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input for matrix B
    printf("Enter elements for matrix B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Compute matrix C = A + B
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display matrix C
    printf("Matrix C (A + B):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
