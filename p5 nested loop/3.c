#include <stdio.h>
int main()
{
    system("color e0");
    int n;
    scanf("%d",&n);
    for(int row=1;row<=n;row++)
    {
        for(int col=0;col<=row-1;col++)
        {
            printf("%d",row+col);
        }
        printf("\n");
    }
}