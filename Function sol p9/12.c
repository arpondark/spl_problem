#include <stdio.h>
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Value in func:%d %d", a, b);
}
void main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    swap(x, y);
    printf("\nValue in main:%d %d", x, y);
}