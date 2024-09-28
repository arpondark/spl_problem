#include <stdio.h>
 void func(int x, int y){
    if(x>y ){
        printf("%d is greater %d",x,y);
        
    }
    else if(x<y){
        printf("%d is greater %d",y,x);
    }
    else{
        printf("both are equal");
    }
 }
 int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    func(x,y);
    return 0;
 }