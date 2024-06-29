#include <stdio.h>

void main() {
    int n, i;
    
    scanf("%d", &n);
    int a = 1, b = 1, c;
    printf("%d ", a);
    if(n > 1) printf("%d ", b);

    for(i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    
}
