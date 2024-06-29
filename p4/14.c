#include <stdio.h>

int main() {
    int n, r,nFact = 1, rFact = 1, nrFact = 1;
     
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
    int nCr = nFact / (rFact * nrFact);

    
    printf("%d\n", nCr);

    
}
