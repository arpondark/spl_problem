#include <stdio.h>

int main() {
    int n;
    printf("Enter the dimension of the matrix (n must be an odd number): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;

    // Add the elements of the first row
    for (int j = 0; j < n; j++) {
        sum += matrix[0][j];
        
    }

    // Add the elements of the last row
    for (int j = 0; j < n; j++) {
        sum += matrix[n-1][j]; 
    }

    // Add the elements of the primary diagonal and secondary diagonal
    for (int i = 1; i < n - 1; i++) {
        sum += matrix[i][i];        // primary diagonal
        if (i != n - 1 - i) {       // avoid overlapping at the center element
            sum += matrix[i][n - 1 - i]; // secondary diagonal
        }
    }

    printf("Sum of the selected elements: %d\n", sum);

    return 0;
}
