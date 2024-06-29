#include <stdio.h>

int main() {
    int X, Y;
    printf("Enter two numbers X and Y: ");
    scanf("%d %d", &X, &Y);

    while(X != Y) {
        printf("%d, ", X * X);
        if(X < Y) {
            X++;
        } else {
            X--;
        }
    }
    printf("Reached!\n");

    return 0;
}
