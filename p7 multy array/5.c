#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the identity matrix: ");
    scanf("%d", &n);

    int arr[100][100]; // Assuming maximum size of 100x100

    // Initialize the identity matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
        }
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
