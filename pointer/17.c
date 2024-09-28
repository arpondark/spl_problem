#include <stdio.h>

int main() {
    FILE *file = fopen("sample.txt", "w");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(file, "1 Zahid\n2 Tanvir\n3 Akif\n");

    fclose(file);

    printf("Information saved to sample.txt\n");

    return 0;
}
