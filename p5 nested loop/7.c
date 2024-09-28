#include <stdio.h>
int main()
{
    system("color c0");
    int n;
    scanf("%d",&n);
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++)
        {
            printf("*");
           // optional for making beautiful output// printf(" ");
        }
        printf("\n");
    }
}