#include <stdio.h>

void Get_Number_And_Base(int *N, int *B) {
    printf("Enter the number: ");
    scanf("%d", N);

    printf("Enter the base : ");
    scanf("%d", B);

    while (*B < 2 || *B > 16) {
        printf("Base not within proper range! ");
        scanf("%d", B);
    }
}

void Convert_Number(int N, int B, char converted_number[]) {
    int i = 0;

    while (N > 0) {
        int remainder = N % B;
        converted_number[i] = (remainder < 10) ? (remainder + '0') : (remainder - 10 + 'A');
        i++;
        N /= B;
    }

    converted_number[i] = '\0';

    // Reverse the string to get the correct order
    int j = 0;
    int k = i - 1;
    while (j < k) {
        char temp = converted_number[j];
        converted_number[j] = converted_number[k];
        converted_number[k] = temp;
        j++;
        k--;
    }
}

void Show_Converted_Number(char converted_number[]) {
    printf("Converted number: %s\n", converted_number);
}

int main() {
    int N, B;
    char converted_number[100];

    Get_Number_And_Base(&N, &B);
    Convert_Number(N, B, converted_number);
    Show_Converted_Number(converted_number);

    return 0;
}