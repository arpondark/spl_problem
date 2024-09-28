#include <stdio.h>
 void func(int x){
    if(x>0){
        printf("Positive\n");
    }
    else if(x<0){
        printf("Negative\n");
    }
    else{
        printf("Zero\n");
    }
 }
 int main(){
    int x;
    scanf("%d",&x);
    func(x);
    return 0;
 }