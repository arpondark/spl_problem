#include <stdio.h>
#include <ctype.h>

int isVowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

void countVowelsConsonants(char *str, int *vowelCount, int *consonantCount) {
    while (*str != '\0') {
        if (isalpha(*str)) {
            if (isVowel(*str))
                (*vowelCount)++;
            else
                (*consonantCount)++;
        }
        str++;
    }
}

int main() {
    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);

    countVowelsConsonants(str, &vowels, &consonants);

    printf("Vowels: %d, Consonants: %d\n", vowels, consonants);

    return 0;
}
