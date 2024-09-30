#include <stdio.h>
#include <math.h>

struct com
{
    float real;
    float ima;
};

float mod(struct com n)
{
    return sqrt(n.real * n.real + n.ima * n.ima);
}
float arg(struct com n)
{
    return atan2(n.ima, n.real);
}
int main()
{
    struct com n;
    scanf("%f", &n.real);
    scanf("%f", &n.ima);
    float m = mod(n);
    float x = arg(n);
    printf("Modulus = %.4f\n", m);
    printf("Argument = %.4f\n", x);
}