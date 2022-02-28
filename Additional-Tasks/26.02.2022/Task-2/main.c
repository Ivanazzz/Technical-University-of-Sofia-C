#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете програма, която отпечатва на конзолата числата от 1 до N, които не се делят едновременно на 3 и 7.
    Числото N да се чете от стандартния вход. */

    int number, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        if (i % 3 != 0 && i % 7 != 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}
