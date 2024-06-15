#include <stdio.h>

int main() {
    int angle1, angle2, angle3, sum;
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    if (angle1 <= 0 || angle1 >= 180 || angle2 <= 0 || angle2 >= 180 || angle3 <= 0 || angle3 >= 180) {
        printf("No\n");
        return 1;
    }

    sum = angle1 + angle2 + angle3;

    if (sum == 180) {
        printf("Yes\n");  //by arpon
    } else {
        printf("No\n");
    }

    return 0;
}
