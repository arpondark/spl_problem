#include <stdio.h>

int main() {
    char str[100];
    gets(str);
    int length = 0, i;

    
    while (str[length] != '\0') {
        length++;
    }

    
    for (i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");

    return 0;
}
