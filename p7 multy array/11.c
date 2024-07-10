#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int matrix[n][n];
    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int sum = 0;
    

    for (int i = 0; i < n; i++) {
        for(int j=0;j<n;j++)
        {
            if((i+1)%2!=0 && (j+1)%2==0)
            {
                sum+=matrix[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for(int j=0;j<n;j++)
        {
            if((i+1)%2==0)
            {
                sum+=matrix[i][j];
            }
        }
    }




    printf("%d\n", sum);

    return 0;
}
