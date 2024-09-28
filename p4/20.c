#include <stdio.h>
void main() {
    int n, i, j, sum = 0, term;
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        term = 0;
        for(j = 1; j <= i; j++) {
            term = term * 10 + j;
        }
        sum += term;
    }
    printf("%d\n", sum);
    
}
