#include <stdio.h>
#include <ctype.h>

int main() {
    char c;
    printf("Enter an alphabet: ");
    scanf(" %c", &c);

    char lowercase = tolower(c);

    if (lowercase == 'a' || lowercase == 'e' || lowercase == 'i' || lowercase == 'o' || lowercase == 'u')
        printf("%c is a Vowel.\n", c);
    else if ((lowercase >= 'a' && lowercase <= 'z'))
        printf("%c is a Consonant.\n", c);
    else
        printf("Not an alphabet.\n");

    return 0;
}
