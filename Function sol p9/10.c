#include <stdio.h>

int power(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++) {
        result *= x;
    }
    return result;
}

int main() {
    int x, y;

    printf("Enter the base (x): ");
    scanf("%d", &x);

    printf("Enter the exponent (y): ");
    scanf("%d", &y);

    if (x >= 0 && y >= 0) {
        int result = power(x, y);
        printf("%d to the power of %d is: %d\n", x, y, result);
    } else {
        printf("Both x and y should be positive numbers.\n");
    }

    return 0;
}
