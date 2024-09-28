#include <stdio.h>
#include <math.h>

int main() {
    float X, A, B, C;

    printf("Enter a floating point number (X): ");
    scanf("%f", &X);

    A = ceil(X);
    B = floor(X);
    C = fabs(X);

    printf("A = %.0f B = %.2f C = %f\n", A, B, C);

    return 0;
}
