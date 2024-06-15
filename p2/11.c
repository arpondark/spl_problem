#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers (a, b, c): ");
    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", (a + b <= 80 && c >= 0));
    printf("%d\n", (a - b == 0 && c != 0));
    printf("%d\n", (a != b && !b < c && c > 0));
    printf("%d\n", (a != b || !b < c && c > 0));

    return 0;
}
