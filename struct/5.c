#include <stdio.h>
struct complex{
    float real;
    float ima;

};
int main()
{
    struct complex num;
    scanf("%f",&num.real);
    scanf("%f",&num.ima);
    if(num.ima>=0)
    {
        printf("%0.2f + %.2fi\n",num.real,num.ima);
    }
    else{
        printf("%0.2f %.2fi\n",num.real,num.ima);
    }
    return 0;
}