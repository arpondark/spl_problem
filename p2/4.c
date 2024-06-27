#include <stdio.h>

int main() {
    int X;

    printf("Enter a number (X): ");
    scanf("%d", &X);
    int temp =X;

    printf("X++ : %d\n", X++);
    X=temp;
    printf("++X : %d\n", ++X);
     X=temp;
    printf("X-- : %d\n", X--);
     X=temp;
    printf("--X : %d\n", --X);

    return 0;
}
