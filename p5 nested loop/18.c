#include <stdio.h>

int main() 
{
    system("color f4");

    int n;

    scanf("%d",&n); 

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            
            if(j == 0 || j == n -1 || i == n / 2) {
                printf("H "); //single space print AFTER H  
            } else {
                printf("  "); //double space print
            }
        }
        printf("\n");
    }

    return 0;
}
