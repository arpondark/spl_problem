#include <stdio.h>

void main() {
    int X, N, guess;


    scanf("%d %d", &X, &N);

    for (int i = 0; i < N; i++) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess == X) {
            printf("Right ,Player-2 wins!\n");
            return 0;
        } else {
            printf("Wrong %d Choice(s) Left!\n", N - i - 1);
        }
    }

    printf("Player-1 wins!\n");
    
}
