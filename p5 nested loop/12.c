#include <stdio.h>

int main() {
    int n, i, j, space;
    scanf("%d", &n);
<<<<<<< HEAD
    // Calculate the number of spaces before the asterisks start
=======

>>>>>>> ecd541a9735b1b95f21d69c008f9130d6fa0fe6e
    space = n / 2;

    // Print the upper part of the pattern
    for (i = 1; i <= n; i += 2) {
        // Print leading spaces
        for (j = 0; j < space; j++) {
            printf("_");
        }
        // Print asterisks
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
        space--; // Decrease the space count for the next row
    }

    // Reset the space count for the lower part of the pattern
    space = 1;

    // Print the lower part of the pattern
    for (i = n - 2; i > 0; i -= 2) {
        // Print leading spaces
        for (j = 0; j < space; j++) {
            printf("_");
        }
        // Print asterisks
        for (j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
        space++; // Increase the space count for the next row
    }

    return 0;
}
