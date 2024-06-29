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
                if(row == col || row+col == n-1)
                {
                    printf("*");

                }
                else{
                    printf("_");
                }
        }
        printf("\n");
     }
     return 0;
     
}





