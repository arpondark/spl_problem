#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int GenNthPrime(int N) {
    int count = 0;
    int num = 2;
    while (true) {
        if (IsPrime(num)) {
            count++;
            if (count == N) {
                return num;
            }
        }
        num++;
    }
}

int main() {
    int N;
    scanf("%d", &N);
    printf("%dth Prime: %d\n", N, GenNthPrime(N));
    return 0;
}
