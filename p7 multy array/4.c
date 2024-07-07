#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[100][100];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Major diagonal: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][i]);
    }
    printf("\n");

    printf("Minor diagonal: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i][n - i - 1]);
    }
    printf("\n");

    return 0;
}
