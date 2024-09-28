#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    scanf("%d", &num);
    if (IsPrime(num)) {
        printf("%d is Prime\n", num);
    } else {
        printf("%d is Not Prime\n", num);
    }
    return 0;
}
