#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете програма, която отпечатва на конзолата числата от 1 до N. Числото N трябва да се чете от стандартния вход. */

    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        printf("%d\n", i);
    }
    return 0;
}
