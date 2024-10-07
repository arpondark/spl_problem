#include <stdio.h>
void main()
{
    FILE *fptr;
    char line[256];
    int n, i;
    fptr = fopen("sample.txt", "a");
    printf("Enter the number of lines you want to append: ");
    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        printf("Enter line %d: ", i + 1);
        fgets(line, fptr);
    }
    fclose(fptr);
}