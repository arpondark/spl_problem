#include <stdio.h>

int main() {
    char str[1000];
    char target;
    gets(str);
    scanf(" %c",target);
    int count = 0, i = 0;

    while (str[i] != '\0') {
        if (str[i] == target || str[i] == target - 'a' + 'A' || str[i] == target - 'A' + 'a') {
            count++;
        }
        i++;
    }

    printf("Number of occurrences of '%c': %d\n", target, count);

    return 0;
}
