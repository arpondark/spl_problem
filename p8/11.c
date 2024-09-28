#include <stdio.h>

int main() {
    char str[1000];
    gets(str);
    int sum = 0, i = 0;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            sum += str[i] - '0';
        }
        i++;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}
