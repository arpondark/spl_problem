#include <stdio.h>

void printArrayRecursively(int *arr, int size) {
    if (size == 0)
        return;
    printf("%d ", *arr);
    printArrayRecursively(arr + 1, size - 1);
}

int main() {
    int arr[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements: ");
    printArrayRecursively(arr, n);

    return 0;
}
