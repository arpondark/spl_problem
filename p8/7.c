#include <stdio.h>

int main() {
    char str[1000];
    gets(str);
    int i = 0;

    while (str[i] != '\0') {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] =str[i]-'a'+'A';
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] - 'A' +'a';
        }
        i++;
    }

    printf("%s\n", str);

    return 0;
}
