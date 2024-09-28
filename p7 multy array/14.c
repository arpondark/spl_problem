#include <stdio.h>

int main() {
    int m, n;
    
    scanf("%d %d", &m, &n);
    int matrix[m][n];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Replace duplicates
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                for (int l = 0; l < n; l++) {
                    if (i != k || j != l) {
                        if (matrix[i][j] == matrix[k][l]) {
                            matrix[k][l] = -1;
                        }
                    }
                }
            }
        }
    }

    
    printf("Modified matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
