#include <math.h>
#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if((ceil(log2(x))==floor(log2(x)))){
        printf("Yes\n");
    }
	
	 else{
        printf("No\n");
     }
	return 0;
}

/**/