#include <stdio.h>
#include <stdbool.h>

int main() {
    double doubleValue = 3.14;
    bool boolValue = true;

    printf("The double value: %e\n", doubleValue);
    printf("The boolean value: %d\n", boolValue);

    doubleValue = 1.618039;
    boolValue = false;

    printf("The double value: %f\n", doubleValue);
    printf("The boolean value: %d\n", boolValue);

    return 0;
}
