    #include <stdio.h>
    int main()
    { 
        system("color 00bc");
        int n;
        scanf("%d",&n);
        for(int row=1;row<=n;row++)
        {

            for(int col=row;col<=n-1;col++)
            {
                printf("_");
            }
            for(int col=1;col<=row;col++)
            {
                printf("*");
            }
            printf("\n");
        }
    }