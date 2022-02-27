#include <stdio.h>
#include <stdlib.h>

#define BOOLEAN int
#define TRUE 1

int main()
{
    /* Да се напише програма, която при въвеждането на произволен брой числа извежда сборът им.
    За край на въвеждането се приема въвеждането на 0. */

    BOOLEAN isValid = TRUE;
    int number;
    int numbersSum = 0;

    while (isValid) {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number == 0) {
            break;
        }

        numbersSum += number;
    }

    printf("The sum is: %d", numbersSum);

    return 0;
}
