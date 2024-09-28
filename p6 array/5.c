#include <stdio.h>
void main()
{
    int n,a,b,temp;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(a=0,b=n-1;a<b;a++,b--) /*Here we declare two more variables: `a` to start from beginning of array and `b` set to last index. We then
initiate a loop that will run until `a < b`. In each iteration, we decrement the value of `b`, increment `a`.*/
    {
        temp =arr[a];
        arr[a]=arr[b];
        arr[b]=temp;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}