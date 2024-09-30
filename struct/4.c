#include <stdio.h>
#include <stdlib.h>
struct point
{
    float x, y;
};

float cal(struct point p1, struct point p2, struct point p3)
{
    float area = 0.5*abs((p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y)));
    return area;
}
int main()
{
    struct point p1, p2, p3;
    scanf("%f %f", &p1.x, &p1.y);
    scanf("%f %f", &p2.x, &p2.y);
    scanf("%f %f", &p3.x, &p3.y);

    float area = cal(p1, p2, p3);

    if (area == 0)
    {
        printf("They are in the same line\n");
    }
    else
    {
        printf("The area is %.2f units\n", area);
    }
    return 0;
}