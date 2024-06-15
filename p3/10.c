#include <stdio.h>
int main()
{
    float a,c,result;
    char b;
    scanf("%f %c %f",&a,&b,&c);
    switch (b)
    {
        case '+':
            result =a+c;
            printf("Addition : %.2f\n",result);
            break;

        case '-':
            result =a-c;
            printf("Subtraction : %.2f\n",result);
            break;
        case '*':
            result =a*c;
            printf("Multiplication : %.2f\n",result);
            break;
        case '/':
            
            if (c != 0) {
                result =a/c;
                printf("Division: %.2f\n", result);
            } else {
                printf("Division: Zero as divisor is not valid!\n");
            }
            break;

    default:
        break;
    }
}