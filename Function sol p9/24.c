#include <stdio.h>

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    while (1)
    {
        int x, y;
        scanf_s("%d %d", &x, &y);
        printf_s("GCD: %d\n", gcd(x, y));
        printf_s("LCM: %d\n", lcm(x, y));
        printf_s("\n");
        
    }
    return 0;
}
