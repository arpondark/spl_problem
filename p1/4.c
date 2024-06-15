#include <stdio.h>

int main() {
    int integerValue = 5;
    float floatValue = 3.141593;
    char charValue = 'a';

    printf("The integer value: %d\n", integerValue);
    printf("The floating point value: %f\n", floatValue);
    printf("The character value: %c\n", charValue);

    integerValue = 100;
    floatValue = 1.618000;
    charValue = 'z';

    printf("The integer value: %d\n", integerValue);
    printf("The floating point value: %f\n", floatValue);
    printf("The character value: %c\n", charValue);

    return 0;
}
