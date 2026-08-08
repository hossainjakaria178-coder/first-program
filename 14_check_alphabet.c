#include <stdio.h>

int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an Alphabet.\n", c);
    else
        printf("%c is Not an Alphabet.\n", c);

    return 0;
}
