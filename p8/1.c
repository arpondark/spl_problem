#include <stdio.h>
int main()
{
    char ar[100];
    gets(ar);
    int len = 0;
    while(ar[len] != '\0')
    {
        len++;
    }

    printf("%d",len);
    return 0;
}