#include <stdio.h>
 void func(int x){
    if(x%2==0){
        printf("even\n");
    }
    else{
        printf("odd\n");
    }
 }
 int main(){
    int x;
    scanf("%d",&x);
    func(x);
    return 0;
 }