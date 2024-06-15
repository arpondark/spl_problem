 #include <stdio.h>

int main() {
    float a, b, X;

    printf("Enter two numbers (a and b): ");
    scanf("%f %f", &a, &b);

    X = (3.31 * a * a + 2.01 * b * b * b) / (7.16 * b * b + 2.01 * a * a * a);
    printf("X = %f\n", X);

    return 0;
}
