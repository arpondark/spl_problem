#include <stdio.h>

int main() {
    char str[1000];
    int i = 0,v=0;

    gets(str);


        for( i=0;str[i]!='\0';i++)
        {
            if((str[i] == ' ' || str[i+1] == '\0'))
            {
                v++;
            }
        }
    
    printf("%d",v);
    return 0;
}