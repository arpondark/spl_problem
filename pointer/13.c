#include <stdio.h>

int countDigits(int n) {
    if (n == 0)
        return 0;
    else
        return 1 + countDigits(n / 10);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int digitCount = countDigits(n);

    printf("Number of digits: %d\n", digitCount);

    return 0;
}
