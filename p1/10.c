#include <stdio.h>

int main() {
    long int longIntValue = 2147483647;
    long long int longLongIntValue = 9223372036854775807;
    long double longDoubleValue = 1.1E+4932L;
    short int shortIntValue = 32767;

    printf("The long int value: %ld\n", longIntValue);
    printf("The long long int value: %lld\n", longLongIntValue);
    printf("The long double value: %Lf\n",longDoubleValue);
    printf("The short int value: %hd\n", shortIntValue);


    return 0;
}
