#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);
    
    int A[n], B[n]; 
    
    for(i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }
    
    // Copying elements from A to B in reverse order
    for(i = 0; i < n; i++) {
        B[i] = A[n - 1 - i];
    }
    printf("Array A: ");
    for(i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    printf("Array B: ");
    for(i = 0; i < n; i++) {
    
        printf("%d ", B[i]);
    }
   
    
    return 0;
}
