#include <stdio.h>
void sum(int x, int y, int z)
{
    printf("Sum In Function:%d", x + y + z);
}
int main()
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    sum(x,y,z);
    printf("Sum In Main:%d", x + y + z);

    return 0;
}