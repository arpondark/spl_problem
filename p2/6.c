#include <stdio.h>

int main() {
    int X, Y;

    printf("Enter two numbers (X and Y): ");
    scanf("%d %d", &X, &Y);

    X *= Y;
    printf("Multiplication: %d\n", X);

    X /= Y; 
    X/= Y;
    
    printf("Division: %d\n", X);

    return 0;
}
