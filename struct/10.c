#include <stdio.h>
struct len
{
    int m;
    int c;
};

int main()
{
    struct len l;
    scanf("%d %d", &l.m, &l.c);
    float x = l.m + l.c / 100.00;
    int y = l.m * 100 + l.c;
    printf("Length in meter: %.2f\n", x);
    printf("Length in centimeter: %d\n", y);
    return 0;
}