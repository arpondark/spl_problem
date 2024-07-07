#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int array[x][y];
    for (int i=0;i<x;i++){

        for(int j=0;j<y;j++){

            scanf("%d",&array[i][j]);
        }

    }

    printf("Row-wise: ");

    for (int i = 0; i < x; i++) {

        for (int j = 0; j < y; j++) {

            printf("%d ", array[i][j]);
        }
    }
    printf("\nColumn-wise: ");

    for (int j = 0; j < y; j++) {

        for (int i = 0; i <x ; i++) {

            printf("%d ", array[i][j]);
        }
    }

    
}