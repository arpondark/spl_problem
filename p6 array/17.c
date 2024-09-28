#include <stdio.h>

int main() {
    int n;
    printf("Enter the dimension n (odd number): ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number for the dimension.\n");
        return 1;
    }

    int matrix[n][n];
    printf("Enter the elements of the %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[0][i];  // top row
        sum += matrix[n-1][i];  // bottom row
        sum += matrix[i][0];  // left column
        sum += matrix[i][n-1];  // right column
    }

    // Subtract the corners since they were added twice
    sum -= matrix[0][0];
    sum -= matrix[0][n-1];
    sum -= matrix[n-1][0];
    sum -= matrix[n-1][n-1];

    // Add the center element
    sum += matrix[n/2][n/2];

    printf("Sum of the boxed positions: %d\n", sum);

    return 0;
}
