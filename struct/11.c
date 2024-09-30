#include <stdio.h>
struct len
{
    int m;
    int c;
};

struct len add(struct len l1, struct len l2)
{
    struct len sum;
    sum.c = l1.c + l2.c;
    sum.m = l1.m + l2.m + sum.c / 100;
    sum.c = sum.c % 100;
    return sum;
}

int main()
{
    struct len l1, l2, sum;
    scanf("%d %d", &l1.m, &l1.c);
    scanf("%d %d", &l2.m, &l2.c);
    sum = add(l1, l2);
    printf("The sum is %d meter %d centimeter\n", sum.m, sum.c);
    return 0;
}