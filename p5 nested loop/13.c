#include <stdio.h>
int main()
{
    system("color 0f4");
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("%d", j);// Print numbers in increasing order
        }
      
        for (int j = 1; j < 2 * (n - i); j++) {
            printf("_");
        }
        
        for (int j = i; j >= 1; j--) {
            if (j != n) { // Avoid printing the middle number twice
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}
