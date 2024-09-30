#include <stdio.h>

struct com
{
    float real;
    float ima;
};

struct com add(struct com n1, struct com n2)
{
    struct com result;
    result.real = n1.real + n2.real;
    result.ima = n1.ima + n2.ima;
    return result;
}

struct com subs(struct com n1, struct com n2)
{
    struct com result;
    result.real = n1.real - n2.real;
    result.ima = n1.ima - n2.ima;
    return result;
}

int main()
{
    struct com n1, n2, sum, sum1;
    scanf("%f %f", &n1.real, &n1.ima);
    scanf("%f %f", &n2.real, &n2.ima);

    sum = add(n1, n2);
    sum1 = subs(n1, n2);
    printf("(%.2f + %.2f) + (%.2f + %.2f) = %.2f+%.2fi\n", n1.real, n2.real, n1.ima, n2.ima, sum.real, sum.ima);
    printf("(%.2f + %.2f) - (%.2f + %.2f) = %.2f+%.2fi\n", n1.real, n2.real, n1.ima, n2.ima, sum1.real, sum1.ima);
    return 0;
}
