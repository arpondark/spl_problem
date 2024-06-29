#include <stdio.h>

void main() {
    int n;
    
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if(i<n)
        {
            printf(",");
        }
    }
    
}
