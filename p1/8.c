#include <stdio.h>

int main() {
    int firstValue, middleValue, lastValue;

    printf("Enter three integers: ");
    scanf("%d %d %d", &firstValue, &middleValue, &lastValue);

    printf("First Value = %d  Last Value = %d\n", firstValue, lastValue);

    return 0;
}
