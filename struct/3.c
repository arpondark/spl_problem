#include <stdio.h>
#include <math.h>
struct point
{
    float x,y;
};

float dis(struct point p1,struct point p2)
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y -p1.y,2));

}

int main()
{
    struct point p1,p2;
    scanf("%f %f",&p1.x,&p1.y);
    scanf("%f %f",&p2.x,&p2.y);
    float distance = dis(p1,p2);
    printf("The distance is %0.2f unit",distance);
    return 0;

}
