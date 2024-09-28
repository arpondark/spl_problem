 #include <stdio.h>
int main()
{
    system("color c0");
    int n;
    scanf("%d",&n);
    for(int row=0;row<n;row++)
    {
        for(int col=1;col<=n;col++)
            {
                printf("%d",row+col);
                
            }
            printf("\n");
       
    }
}