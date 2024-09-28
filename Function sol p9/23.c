#include <stdio.h>
#include <string.h>
int str_len(char arr[])
{
    int i = 0;
    while (arr[i] != '\0')
    {
        i++;
    }
    return i;
}

int find_substr(char a[], char b[]) {
    int len_a = str_len(a);
    int len_b = str_len(b);

    
    for (int i = 0; i <= len_a - len_b; i++) {
        int match = 1;

    
        for (int j = 0; j < len_b; j++) {
            if (a[i + j] != b[j]) {
                match = 0;
                break;
            }
        }

        if (match == 1) {
            return 1; 
        }
    }

    return -1; 
}

int main() {
    char a[100], b[100];

    printf("Enter string a: ");
    scanf("%s", a);

    printf("Enter string b: ");
    scanf("%s", b);

    int result = find_substr(a, b);

    if (result == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}