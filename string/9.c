#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str1, sizeof(str1), stdin);

    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';

    printf("%s", str2);

    return 0;
}
