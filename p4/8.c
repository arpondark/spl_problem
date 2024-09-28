#include <stdio.h>
void main()
{
    int n,r=0;
    scanf("%d",&n);
    while (n != 0) {
        r = r * 10 + n % 10;// Take the last digit of n and add it to r after shifting r one place to the left.
        n = n/10; //Remove the last digit from n by performing integer division by 10.
    }
     printf("%d\n", r);
}