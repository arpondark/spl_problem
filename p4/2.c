 #include <stdio.h>
 void main()
 {
    int n;
    scanf("%d", &n );
    for(int i=1;i<=n;i++)
    {
        printf("%d",2*i-1);
        if(i<n)
        {
            printf(",");
        }
        
    }
 }