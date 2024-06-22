#include <stdio.h>
void main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x!=y)
    {
        for(int i=1;i<=x;i++)
        {
            printf("%d,",x*x);
            x--;
            if(x*x==y*y)
            {
                printf("Reached!");
            }
            
        }
    }
    else{
        printf("Reached!");
    }
}