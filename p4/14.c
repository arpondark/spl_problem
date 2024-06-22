#include <stdio.h>

int main() {
    int n, r;
    unsigned long long nFact = 1, rFact = 1, nrFact = 1;
    scanf("%d %d", &n, &r);
    // Calculate n!
    for (int i = 1; i <= n; i++) {
        nFact *= i;
    }

    // Calculate r!
    for (int i = 1; i <= r; i++) {
        rFact *= i;
    }

    // Calculate (n-r)!
    for (int i = 1; i <= (n - r); i++) {
        nrFact *= i;
    }

    // Calculate nCr
    unsigned long long nCr = nFact / (rFact * nrFact);

    
    printf("%llu\n", nCr);

    
}
