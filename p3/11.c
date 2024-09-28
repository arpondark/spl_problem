#include <stdio.h>
int main()
{
    float a;
    scanf("%f",&a);
    if(a>=90)
    {
        printf("GRADE : A\n");
    }
    else if(a>=86 && a<=89)
    {
        printf("GRADE : A-\n");
    }
    else if(a>=82 && a<=85)
    {
        printf("GRADE : B+\n");
    }
    else if(a>=78 && a<=81)
    {
        printf("GRADE : B\n");
    }
    else if(a>=74 && a<=77)
    {
        printf("GRADE : B-\n");
    }
    else if(a>=70 && a<=73)
    {
        printf("GRADE : C+\n");
    }
    else if(a>=66 && a<=69)
    {
        printf("GRADE : C\n");
    }
    else if(a>=62 && a<=65)
    {
        printf("GRADE : C-\n");
    }
    else if(a>=58 && a<=61)
    {
        printf("GRADE : D+\n");
    }
    else if(a>=55 && a<=57)
    {
        printf("GRADE : D\n");
    }
    else
    {
        printf("GRADE : F\n");
    }

}