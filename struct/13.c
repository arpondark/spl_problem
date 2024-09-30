#include <stdio.h>

struct time
{
    int h;
    int m;
    int s;
};

struct time df(struct time t1, struct time t2)
{
    struct time dif;
    if (t2.s < t1.s)
    {
        t1.s += 60;
        t1.m--;
    }
    dif.s = t1.s + t2.s;
    if (t2.m > t1.m)
    {
        t1.m += 60;
        t1.h--;
    }
    dif.m = t1.m - t2.m;
    dif.h = t1.h - t2.h;
    return dif;
}

int main()
{
    struct time t1, t2, dif;
    scanf("%d %d %d", &t1.h, &t1.m, &t1.s);
    scanf("%d %d %d", &t2.h, &t2.m, &t2.s);
    dif = df(t1, t2);
    printf("The difference is %d hour %d minute %d second\n", dif.h, dif.m, dif.s);
    return 0;
}