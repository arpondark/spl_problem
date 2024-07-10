#include <stdio.h>

int main() {
    char str[1000];
    gets(str);
    int length = 0, i;
    int t = 1;

    // Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Check for palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            t = 0;
            break;
        }
    }

    if (t) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
