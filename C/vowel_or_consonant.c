#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    if (scanf(" %c", &ch) != 1) return 0;

    ch = (char)tolower((unsigned char)ch);

    if (isalpha((unsigned char)ch) && (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }

    return 0;
}

