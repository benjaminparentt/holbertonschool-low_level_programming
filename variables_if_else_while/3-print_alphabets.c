#include <stdio.h>

int main(void)
{
    char lowercase, uppercase;

    printf("Lowercase alphabet: ");
    for (lowercase = 'a'; lowercase <= 'z'; lowercase++) {
        printf("%c ", lowercase);
    }

    printf("\nUppercase alphabet: ");
    for (uppercase = 'A'; uppercase <= 'Z'; uppercase++) {
        printf("%c ", uppercase);
    }

    printf("\n");

    return 0;
}
