#include <stdio.h>

int main() {
    double number;

    printf("Enter a floating point number: ");
    scanf("%lf", &number);

    printf("(a) Val:%10lf\n", number);

    printf("(b) Val:%2f\n", number);

 
    printf("(c) Val:%.2f\n", number);

    
    printf("(d) Val:%.0f\n", number);
    printf("(e) Val:%e\n", number);

    return 0;
}
