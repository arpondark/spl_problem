#include <stdio.h>
int main()
{
    system("color 1F");
     int n;
     scanf("%d",&n);
     for(int row=0;row<n;row++)
     {
        for(int col=0;col<n;col++)
        {
            if(row == 0 || row == n-1)
            {
                printf("Z");
            }else{
                if(col == n - row - 1)
                {
                    printf("Z");
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
     }
     return 0;
     
}