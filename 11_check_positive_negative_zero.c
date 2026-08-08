#include <stdio.stdio.h> // stdio.h
#include <stdio.h>

int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num > 0.0)
        printf("%.2lf is Positive.\n", num);
    else if (num < 0.0)
        printf("%.2lf is Negative.\n", num);
    else
        printf("You entered Zero.\n");

    return 0;
}
