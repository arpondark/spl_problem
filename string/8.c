#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

   
    str1[strcspn(str1, "\n")] = 0;  // Remove newline characters from fgets input
    str2[strcspn(str2, "\n")] = 0;   // Remove newline characters from fgets input

    // Compare the two strings lexicographically
    int cmp = strcmp(str1, str2);

    if (cmp > 0) {
        printf("%s\n", str1);
    } else if (cmp < 0) {
        printf("%s\n", str2);
    } else {
        printf("Both are equal\n");
    }

    return 0;
}
