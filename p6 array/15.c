#include <stdio.h>

int main() {
    int n, m;
    int A[100], B[100], C[200];
    int i, j, k;

    
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    
    scanf("%d", &m);
    for(i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    // Adding elements of A to C
    for(i = 0; i < n; i++) {
        C[i] = A[i];
    }
    k = n;

    // Adding elements of B to C if not already present
    for(i = 0; i < m; i++) {
        int isPresent = 0;
        for(j = 0; j < n; j++) {
            if(B[i] == A[j]) {
                isPresent = 1;
                break;
            }
        }
        if(!isPresent) {
            C[k++] = B[i];
        }
    }

    // union array c
    for(i = 0; i < k; i++) {
        for(j = i + 1; j < k; j++) {
            if(C[i] > C[j]) {
                int temp = C[i];
                C[i] = C[j];
                C[j] = temp;
            }
        }
    }

    
    for(i = 0; i < k; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
