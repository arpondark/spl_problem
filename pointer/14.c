#include <stdio.h>

int findMax(int *arr, int size)
{
    if (size == 1)
        return *arr;

    int maxRest = findMax(arr + 1, size - 1);
    return (*arr > maxRest) ? *arr : maxRest;
}

int main()
{
    int arr[100], n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxElement = findMax(arr, n);

    printf("The largest element is: %d\n", maxElement);

    return 0;
}
