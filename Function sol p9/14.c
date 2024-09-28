#include <stdio.h>
void find(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ", arr[i]);
        }
    }
}

void main()
{
    int arr[100],n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    find(arr,n);
}