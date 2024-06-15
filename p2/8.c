#include <stdio.h>

int main() {
    int x, y, max;

    printf("Enter two numbers (x and y): ");
    scanf("%d %d", &x, &y);

    max = (x > y) ? x : y;
    printf("Max: %d\n", max);

    return 0;
}
