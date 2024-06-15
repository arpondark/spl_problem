#include <stdio.h>

int main() {
    float X, Y;

    
    scanf("%f %f", &X, &Y);

    printf("Addition: %.2f\n", X + Y);
    printf("Subtraction: %.2f\n", X - Y);
    printf("Multiplication: %.2f\n", X * Y);
    printf("Quotient: %.2f\n", X / Y);
    printf("Remainder: %d\n", (int)X % (int)Y);
    

    return 0;
}
