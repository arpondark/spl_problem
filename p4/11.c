 #include <stdio.h>
 #include <math.h>
 void main()
 {
    int n,k=0,i,sum=0;;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   
        sum+=pow(i,2)*(i+1);
    }
    printf("%d",sum);

    
 }