#include <stdio.h>
int main()
{
    char str[1000];
    gets(str);
    int l = 0, i, t = 1;
    while (str[l] != '\0')
    {
        l++;
    }

    for (i = 0; i < l / 2; i++)
    {
        if (str[i] != str[l - i - 1])
        {
            t = 0;
            break;
        }
    }

    if (t)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}