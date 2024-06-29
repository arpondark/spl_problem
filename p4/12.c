#include <stdio.h>

void main() {
    int n, i;
    
    scanf("%d", &n);
    int a = 1, b = 1, c;
    printf("%d ", a);
    if(n > 1) printf("%d ", b);

<<<<<<< HEAD
    for(i = 2; i < n; i++) {
=======
    for(i = 3; i <= n; i++) {
>>>>>>> 8dc9154a52cdb342dde0a636c36959a68fa8c4ab
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    
}
