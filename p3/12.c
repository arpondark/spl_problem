#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c); //12
    switch(c)
    {
        case 1:
        printf("Addition: %d\n",a+b);
        break;
        case 2:
        printf("Substraction: %d\n",a-b);
        break;
        case 3:
        printf("Multiplication: %d\n",a*b);
        break;
        case 4:
        printf("Quotient: %d\n",a/b);
        break;
        default:
        break;
    }
    return 0;

}