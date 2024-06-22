#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sum = 0;
    int i, j, sign = 1;

    scanf("%lf", &x);

    for (i = 0; i < 10; i++) {
        // Calculate the factorial of (2i + 1)
        double fact = 1;
        for (j = 1; j <= (2 * i + 1); j++) {
            fact *= j;
        }
        term = sign * pow(x, 2 * i + 1) / fact;
        sum += term;
        sign = -sign;
    }

    printf("%.3lf\n",sum);

    return 0;
}
