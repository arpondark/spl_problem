#include <stdio.h>

int main() {
    char str1[1000];
    int i = 0,v=0;

    gets(str1);

    while (str1[i] != '\0') {

        for( i=0;str1[i]!='\0';i++)
        {
            
            if(str1[i] == 'A' || str1[i] == 'a' || str1[i] == 'E' || str1[i] == 'e' || str1[i] == 'I' || str1[i] == 'i' || str1[i] == 'O' || str1[i] == 'o' || str1[i] == 'U' || str1[i] == 'u')
            {
                v++;
            }
            
        }
    }
    printf("%d",v);
    return 0;
}