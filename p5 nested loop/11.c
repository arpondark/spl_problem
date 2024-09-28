 #include <stdio.h>
 int main()
 { 
    system("color 0f4");
    int n;
    scanf("%d",&n);
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n-row;col++)
        {
            printf("_");
        }
        for(int j=1;j<2*row;j++)
        {
            printf("*");
           
        }
        
        printf("\n");
    }
 }