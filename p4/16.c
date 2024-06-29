#include <stdio.h>

int main() {
    int a, b, originalA, originalB, gcd, lcm ;

    // Input two positive integers
    
    scanf("%d %d", &a, &b);

    originalA = a;
    originalB = b;

    // Calculate GCD 
   
    for(int i=1; i <= a && i <= b; ++i)
    {
        // Checks if i is factor of both integers
        if(a%i==0 && b%i==0)
            gcd = i;
    }

    // Calculate LCM
    lcm = (originalA * originalB) / gcd;

    // Output the results
    printf("GCD: %d\n", gcd);
    printf("LCM: %d\n", lcm);

    return 0;
}
