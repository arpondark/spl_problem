#include <stdio.h>

int main() {
    char ch;
    printf("Enter an uppercase letter: ");
    scanf("%c", &ch);
    
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;  // Add 32 to convert uppercase to lowercase
        printf("Lowercase: %c\n", ch);
    } else {
        printf("Wrong input\n");
    }
    
    return 0;
}
