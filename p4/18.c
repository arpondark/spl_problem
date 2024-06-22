#include <stdio.h>
void main() {
    int num, original, reversed = 0, digit;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Reverse the number
    while (num != 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    // Output the result
    if (original == reversed) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    
}
