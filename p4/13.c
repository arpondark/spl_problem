#include <stdio.h>

void main() {
    int num, i,factorial = 1;
    scanf("%d", &num);
    int x=num;
    printf("%d! = ", num);
    for (i = 1; i <= num; i++) {
        printf("%d",x-- );
        if (i < num) {  
            printf(" X ");
        }
        factorial *= i;
    }

    printf(" = %d\n", factorial);

    
}
