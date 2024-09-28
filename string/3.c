#include <stdio.h>

int main() {
    char ch;
    printf("Enter a digit: ");
    scanf("%c", &ch);
    
    if (isdigit(ch)) {
        printf("Numerical representation: %d\n", ch - '0');
    } else {
        printf("Wrong input\n");
    }
    return 0;
}
