#include <stdio.h>

int main()
{
    char ch;
    FILE *fptr;

    fptr = fopen("sample.txt", "r");

    if (fptr == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF)
    {
        putchar(ch);
    }

    fclose(fptr);

    return 0;
}
