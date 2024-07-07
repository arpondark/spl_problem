#include <stdio.h>

int main() {
    system("color 4");
    int n;
    scanf("%d", &n);
    printf("\n");

    int matrix[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n \n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n \n");

     for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("col =%d, row=%d", i,j);
        }
        printf("\n");
    }


}
