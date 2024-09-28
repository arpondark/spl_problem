#include <stdio.h>

int main() {
    int intVal;
    float floatVal;

    
    scanf("%d %f", &intVal, &floatVal);

    printf("Assignment: %f assigned to an int produces %d\n", floatVal, (int)floatVal);
    printf("Assignment: %d assigned to a float produces %f\n", intVal, (float)intVal);

    intVal = (int)floatVal;
    floatVal = (float)intVal;

    printf("Type Casting: (float) %d produces %f\n", intVal, (float)intVal);
    printf("Type Casting: (int) %f produces %d\n", floatVal, (int)floatVal);

    return 0;
}
