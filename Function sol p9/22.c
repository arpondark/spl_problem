#include <stdio.h>
#include <string.h>

int find_substr(char a[], char b[]) {
    int len_a = strlen(a);
    int len_b = strlen(b);

    // Iterate through each possible starting position in a
    for (int i = 0; i <= len_a - len_b; i++) {
        int match = 1;

        // Check if the substring b matches from the current position
        for (int j = 0; j < len_b; j++) {
            if (a[i + j] != b[j]) {
                match = 0;
                break;
            }
        }

        if (match == 1) {
            return 1; // Substring found
        }
    }

    return -1; // Substring not found
}

int main() {
    char a[100], b[100];

    printf("Enter string a: ");
    scanf("%s", a);

    printf("Enter string b: ");
    scanf("%s", b);

    int result = find_substr(a, b);

    if (result == 1) {
        printf("String b is found in string a.\n");
    } else {
        printf("String b is not found in string a.\n");
    }

    return 0;
}