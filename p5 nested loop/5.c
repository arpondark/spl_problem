#include <stdio.h>
int main()
{
    system("color f3");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    { 
        printf("%d ",n);
        
        for(int j=1;j<=i-1;j++)
        { 
           
            printf("%d ",n-j);
        }
        printf("\n");
    }
}