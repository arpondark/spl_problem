#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("sample.txt","r");
    char ar[1000];
    while(fgets(ar,100,fptr)){
        printf("%s",ar);
    }
    fclose(fptr);
    return 0;

}