#include <stdio.h>
#include <stdlib.h>

char* oddOrEven(int);

int main()
{
    /* Напишете функция, която проверява дали конкретно число е четно или нечетно. */

    printf("The number is %s!", oddOrEven(15));

    return 0;
}

char* oddOrEven(int number) {
    char* result;

    if (number % 2 == 0) {
        result = "even";
    } else {
        result = "odd";
    }

    return result;
}
