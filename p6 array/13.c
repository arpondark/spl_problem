#include<stdio.h>

int main() {
    int n;
    int A[100];
    int B[100];

    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    
    int count = 0;
    for (int i = 0; i < n; i++) {
        int flag = 1;
        for (int j = 0; j < count; j++) {
            if (A[i] == B[j]) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            B[count++] = A[i];
        }
    }

    
    for (int i = 0; i < count; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}