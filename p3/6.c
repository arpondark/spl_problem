#include <math.h>
#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
   
     if(x<0)
    {
        printf("Negative input is not valid\n");
        
    }
    else if(x==0)
    {
        printf("Zero is not a valid input\n");
        
    }
    else if((ceil(log2(x))==floor(log2(x)))){
        printf("Yes\n");
    }
	
	 else{
        printf("No\n");
     }
	return 0;
}

