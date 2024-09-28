#include <stdio.h>
int main()
{       
    system("color 0f4");
     int n;
     scanf("%d",&n);
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            if(i%2==0 ||j==0 || j==n-1)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");
     }
    return 0;    
}