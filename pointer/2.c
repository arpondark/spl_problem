#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    if (*ptr1 > *ptr2)
        printf("Maximum: %d\n", *ptr1);
    else
        printf("Maximum: %d\n", *ptr2);

    return 0;
}
