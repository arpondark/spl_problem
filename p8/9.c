#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int count = 0;

    // Getting input from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter a character to count: ");
    scanf(" %c", &ch);

    // Counting occurrences
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch || str[i] == ch + ('A' - 'a') || str[i] == ch - ('A' - 'a')) {
            count++;
        }
    }

    // Printing the result
    printf("The character '%c' occurs %d times in the string.\n", ch, count);

    return 0;
}
