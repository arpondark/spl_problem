#include <stdio.h>

int main() {
    int arr[100], n;
    int *ptr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr; // Points to the first element of the array

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
