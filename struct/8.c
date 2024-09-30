#include <stdio.h>

struct com
{
    float real;
    float ima;
};

struct com mul(struct com n1, struct com n2)
{
    struct com result; 
    result.real = n1.real * n2.real - n1.ima * n2.ima;
    result.ima = n1.real * n2.ima + n1.ima * n2.real;
    return result;
}

int main()
{
    struct com n1, n2, product;
    scanf("%f %f", &n1.real, &n1.ima);
    scanf("%f %f", &n2.real, &n2.ima);

    product = mul(n1, n2);

    printf("(%.2f + %.2f) * (%.2f + %.2f) = %.2f+%.2fi\n", n1.real, n2.real, n1.ima, n2.ima, product.real, product.ima);
    return 0;
}
