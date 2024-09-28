#include <stdio.h>

int main() {
    int n, m;
    int A[100], B[100], C[100];
    int i, j, k;

    
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    
    scanf("%d", &m);
    for(i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    
    k = 0;
    for(i = 0; i < n; i++) {
        int isPresent = 0;
        for(j = 0; j < m; j++) {
            if(A[i] == B[j]) {
                isPresent = 1;
                break;
            }
        }
        if(!isPresent) {
            C[k++] = A[i];
        }
    }

    
    for(i = 0; i < k; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
