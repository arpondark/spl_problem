#include <stdio.h>
struct time
{
    int h;
    int m;
    int s;
};

int main()
{
    struct time t;
    scanf("%d %d %d", &t.h, &t.m, &t.s);
    float th = t.h + t.m / 60.00 + t.s / 3600.0;
    float tm = t.h * 60 + t.m + t.s / 60.0;
    int ts = t.h * 3600 + t.m * 60 + t.s;
    printf("Time interval in hours: %.2f\n", th);
    printf("Time interval in minutes: %.2f\n", tm);
    printf("Time interval in seconds: %d\n", ts);
    return 0;
}