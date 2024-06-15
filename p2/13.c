#include <stdio.h>
#include <math.h>

int main() {
    double x, result;
    // Convert x from degrees to radians inside the main function
    double x_radians;

    // Prompt the user for input
    printf("Enter the value of x (1 <= x < 180): ");
    scanf("%lf", &x);

    // Check if x is within the valid range
    if (x >= 1 && x < 180) {
        x_radians = x * M_PI / 180.0; // Conversion to radians
        // Directly evaluate the equation in the main function
        result = 2 * pow(cos(x_radians), 2) - sqrt(3) * sin(x_radians) + log10(x / 2);
        printf("The result of the equation is: %f\n", result);
    } else {
        printf("The value of x is out of the valid range.\n");
    }
    return 0;
}
