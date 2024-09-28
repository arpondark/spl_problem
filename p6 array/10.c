#include<stdio.h>

int main() {
    int n, m;
    int A[100], B[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < n; i++) {
        int temp = A[i];
        A[i] = B[i];
        B[i] = temp;
    }

    
    printf("Array A : ");
    for (int i = 0; i < m; i++) {
        printf("%d ", A[i]);
    }


    printf("\nArray B : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}