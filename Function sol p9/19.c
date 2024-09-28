#include <stdio.h>
#include <stdbool.h>

bool IsPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
void GenPrime(int x)
{
    for(int i=2;i<x;i++)
    {
        if(IsPrime(i))
        {
            printf("%d ",i);
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
    printf("Primes less than %d: ", n);
    GenPrime(n);
    return 0;
}