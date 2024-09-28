#include <stdio.h>

void main() {
    int n;
    float x,y;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%f", &x);
        y+=x;
    }
    printf("AVG of %d inputs: %f", n,y/n);
    
}
