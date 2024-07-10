#include<stdio.h>

int main(){

    int n;
    scanf("%d" , &n);

    int sum = 0;
    int  k = (n/2)+1;

    int max[n][n];

    for(int i=1 ; i<=n;i++){
        for(int j=1 ; j<=n ; j++){
            scanf("%d" ,&max[i][j]);
        }
    }

    for(int i=1 ; i<=n;i++){
        for(int j=1 ; j<=n ; j++){

            if(i==1 && j<k){
                sum += max[i][j];
            }
            if((i<k && j==k) || (i<k && j==n)){
                sum += max[i][j];
            }
            if(i==k && j<=n){
                  sum += max[i][j];
            }
            if((i>k && j==1) || (i>k && j==k)){
                sum += max[i][j];
            }
            
            if(i==n && j>k){
                sum += max[i][j];
            }
            
    }
    


}
printf("sum=%d" , sum);

}