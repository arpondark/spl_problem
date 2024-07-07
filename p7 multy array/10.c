#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the matrix (odd number): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    int mid = (n / 2) +1;

    for (int i = 0; i < n; i++) {
        // Main diagonal
        sum += matrix[i][i];
        // Secondary diagonal
        sum += matrix[i][n-1-i];
        // Middle row and middle column, avoiding double-counting the diagonals
        if (i != mid) {
            sum += matrix[mid][i];
            sum += matrix[mid][i];
           
        }
    }

    // The center element has been added twice, so subtract it once
    sum -= matrix[mid][mid];

    printf("Sum of the highlighted positions: %d\n", sum);

    return 0;
}
