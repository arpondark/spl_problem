 #include <stdio.h>
 void main()
 {
    int n;
    scanf("%d", &n );
    for(int i=1;i<=n;i++)
    {
        printf("%d",i%2);
        if(i<n)
        {
            printf(",");
        }
        
    }
 }