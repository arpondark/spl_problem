#include <stdio.h>

int main() {
    char str[1000];
    gets(str);
    int length = 0;
    char temp;

    
    while (str[length] != '\0') {
        length++;
    }

    
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    printf("%s\n",str);

    return 0;
}

