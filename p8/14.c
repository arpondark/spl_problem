#include <stdio.h>
#include <ctype.h> 

int main() {
    char str[1000];
    int frequency[26] = {0}; // Initialize an array to store character frequencies

    printf("Enter a string: ");
    gets(str);

    // Convert the entire string to uppercase for case-insensitive comparison
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    // Calculate character frequencies
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            frequency[str[i] - 'A']++;
        }
    }

    // Find the maximum frequency character
    char maxChar = 'A';
    int maxFrequency = frequency[0];
    for (int i = 1; i < 26; i++) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            maxChar = 'A' + i;
        }
    }

    printf(" %c(or %c)\n", maxChar,tolower(maxChar));
    return 0;
}
