#include <stdio.h>

int main() {
    int X, Y;

    printf("Enter two numbers (X and Y): ");
    scanf("%d %d", &X, &Y);

    X += Y;
    printf("Incremented Value: %d\n", X);

    X -= 2 * Y; 
    printf("Decremented Value: %d\n", X);

    return 0;
}
