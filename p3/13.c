#include <stdio.h>
#include <math.h>
int main ()
{
    float a,b; //13 and 14
    int c,x;
    scanf("%f %f %d",&a,&b,&c);
    switch(c)
    {
        case 1:
                printf("Addition: %.2f",a+b);
                    break;
        case 2:
                printf("Substraction: %.2f",a-b);
                    break;
        case 3:
                printf("Multiplication: %.2f",a*b);
                    break;
        case 4:
                scanf("%d",&x);
                    switch(x)
                        {
                             case 1:
                                    printf("Quotient: %.2f",a/b);
                                     break;
                            case 2:
                                    printf("Reminder: %d",(int)a%(int)b);
                                        break;
                                             default:
                                                     break;
        }
                

        break;
        default:
        break;
    
    
    }
        return 0;
    }