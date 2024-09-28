#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    int matrix[100][100];

    
    printf("Enter elements for the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is symmetric
    int symmetric = 1; // Assume symmetric initially

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = 0; // Not symmetric
                break;
            }
        }
        if (!symmetric) {
            break;
        }
    }


    if (symmetric) {
        printf("Yes.\n");
    } else {
        printf("No.\n");
    }

    return 0;
}
