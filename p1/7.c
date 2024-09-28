#include <stdio.h>

int main() {
    int intValue;
    float floatValue;
    char charValue;

    printf("Enter an integer, a floating point number, and a character: ");
    scanf("%d %f %c", &intValue, &floatValue, &charValue);

    printf("The integer value: %d\n", intValue);
    printf("The floating point value: %f\n", floatValue);
    printf("The character value: %c\n", charValue);

    return 0;
}
