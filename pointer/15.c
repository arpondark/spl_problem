#include <stdio.h>

void printEvenOdd(int start, int end, int isEven) {
    if (start > end)
        return;

    if (isEven) {
        if (start % 2 == 0)
            printf("%d ", start);
    } else {
        if (start % 2 != 0)
            printf("%d ", start);
    }

    printEvenOdd(start + 1, end, isEven);
}

int main() {
    int start, end, choice;

    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);

    printf("Enter 1 for even numbers or 0 for odd numbers: ");
    scanf("%d", &choice);

    if (choice == 1)
        printf("Even numbers: ");
    else
        printf("Odd numbers: ");

    printEvenOdd(start, end, choice);

    printf("\n");
    return 0;
}
