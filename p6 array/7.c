#include <stdio.h>

void main() 
{
    int n;
    char arr[100];
    int count = 0;
    scanf("%d", &n);
    scanf("%s", arr);

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U') 
        {
            count++;
        }
    }

    printf("Count: %d", count);

    
}