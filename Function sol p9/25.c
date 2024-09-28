#include <stdio.h>

void InputMatrix(int mat[3][5]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

void ShowMatrix(int mat[3][5]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void ScalarMultiply(int mat[3][5], int scalar) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            mat[i][j] *= scalar;
        }
    }
}

int main() {
    int mat[3][5];
    int n;
    InputMatrix(mat);
        scanf("%d", &n);

    printf("Original:\n");
    ShowMatrix(mat);
    ScalarMultiply(mat, n);
    printf("Multiplied by %d:\n",n);
    ShowMatrix(mat);
    return 0;
}
