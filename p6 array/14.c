#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j;
    int A[100], B[100], C[100];
    int count = 0;

    scanf("%d", &n);
    
    for (i = 0; i < n; i++) { scanf("%d", &A[i]); }

    scanf("%d", &m);
    for (i = 0; i < m; i++) { scanf("%d", &B[i]); }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (A[i] == B[j])
            {
                C[count] = A[i];
                count++;
            }
        }
    }

    
    if (count == 0)
    {
        printf("Empty set\n");
    }
    else
    {
        for (i = 0; i < count; i++) { printf("%d ", C[i]); }
        printf("\n");
    }

    return 0;
}