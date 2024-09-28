#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int x =sqrt(n);
    int arr[x][x];
    for(int i=0;i<x;i++)
    {
       for(int j=0;j<x;j++)
       {
         scanf("%d",&arr[i][j]);
       }
    }
    for(int i=0;i<x;i++)
    {

          for(int j=0;j<x;j++)
                {
                    printf("%d ",arr[i][j]);
                }
        printf("\n");
    }
    return 0;
}