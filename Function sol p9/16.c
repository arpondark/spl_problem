#include <stdio.h>
void mul(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] *= 2;
        printf("%d ", arr[i]);
    }
}
void main()
{
    int arr[1000], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    mul(arr, n);
}