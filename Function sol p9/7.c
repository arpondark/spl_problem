#include <stdio.h>

int calculateSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sumInFunction = calculateSum(arr, n);
    printf("Sum In Function: %d\n", sumInFunction);

    int sumInMain = 0;
    for (int i = 0; i < n; i++) {
        sumInMain += arr[i];
    }
    printf("Sum In Main: %d\n", sumInMain);

    return 0;
}
