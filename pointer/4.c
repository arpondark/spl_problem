#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("Length of the string: %d\n", stringLength(str));

    return 0;
}
