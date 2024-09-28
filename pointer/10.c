#include <stdio.h>

int sumRecursion(int n) {
    if (n == 0)
        return 0;
    else
        return n + sumRecursion(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = sumRecursion(n);

    printf("Sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
