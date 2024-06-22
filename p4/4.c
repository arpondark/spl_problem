#include <stdio.h>

int main() {
    int n;
    float x,y;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &x);
        y+=x;
    }
    printf("AVG of %d inputs: %f", n,y/n);
    return 0;
}
