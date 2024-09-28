#include <stdio.h>
void myfnc(int arr[], int n){
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}
int main(){
    int x;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&x);
    int arr[x];
    printf("Enter the elements in an array: ");
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    myfnc(arr,x);
    return 0;
 }