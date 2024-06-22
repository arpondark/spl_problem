 #include <stdio.h>
 int main()
 {
    system("color f4");
    int n;
    scanf("%d",&n);
    for(int row=1;row<=n;row++)
    {
        for(int col=row;col<=n-1;col++)  //col<n can be also written
        {
            printf("_");//print (_)
        }
        for(int i=1;i<=row;i++)
        {
            printf("%d",row);//printing numbers. 
            /*short tricks to print same number print row and if print n+1 number format then print col  */
        }
        printf("\n");
    }
 }