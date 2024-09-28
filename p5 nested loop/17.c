#include <stdio.h>

int main ()
{
    system("color 1F");
    int n,i,j,k,m;
    
    scanf("%d",&n);
    k = n/2;
    if(n%2!=0){
    //For printing half lines
        for(i=k;i>=1;i--){
        //half column without $
            for(j=0;j<i;j++){
                printf("_");
            }
            if(i<k){
               printf("$");
                for(m=1;m<k-i;m++){
                    printf("_");
                }
            }
        // Middle $
            printf("$");
        //Next half column
            if(i<k){
                for(m=1;m<k-i;m++){
                    printf("_");
                }
                printf("$");
            }
            for(j=0;j<i;j++){
                printf("_");
            }
            printf("\n");
        }
    //For printing middle line
        for(i=0;i<n;i++){
           printf("$");
        }
        printf("\n");
    //For printing last half lines
        for(i=1;i<=k;i++){
            for(j=0;j<i;j++){
                printf("_");
            }
            if(i!=k){
                printf("$");
                for(m=1;m<k-i;m++){
                    printf("_");
                }
            }
           printf("$");
            for(m=1;m<k-i;m++){
               printf("_");
            }
            if(i!=k){
                printf("$");
            }
            for(j=0;j<i;j++){
                printf("_");
            }
            printf("\n");
        }
    }
}