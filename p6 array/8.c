#include <stdio.h>

void main() {
    int n;
    
    int num, found = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &num);

    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            found = 1;
            printf("FOUND at index position: %d, %d\n",num, i);
            break;
        }
    }

    if (!found) {
        printf("NOT FOUND\n");
    }


}