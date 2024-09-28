#include <stdio.h>
#include <math.h>

void TakeInput(int array[], int *num_of_elem) {
    printf("Enter the number of elements: ");
    scanf("%d", num_of_elem);

    printf("Enter the elements:\n");
    for (int i = 0; i < *num_of_elem; i++) {
        scanf("%d", &array[i]);
    }
}

double CalcMean(int array[], int num_of_elem) {
    int sum = 0;
    for (int i = 0; i < num_of_elem; i++) {
        sum += array[i];
    }
    return (double)sum / num_of_elem;
}

double Calc_Std_deviation(int array[], int num_of_elem) {
    double mean = CalcMean(array, num_of_elem);
    double variance = 0;

    for (int i = 0; i < num_of_elem; i++) {
        variance += pow(array[i] - mean, 2);
    }

    return sqrt(variance / num_of_elem);
}

int main() {
    int num_of_elem;
    int array[100];

    TakeInput(array, &num_of_elem);
    double std_deviation = Calc_Std_deviation(array, num_of_elem);

    printf("Standard Deviation: %.2f\n", std_deviation);

    return 0;
}