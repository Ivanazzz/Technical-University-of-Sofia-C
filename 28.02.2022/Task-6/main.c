#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете програма, която чете градуси по скалата на Целзий и ги превръща в градуси по Фаренхайт. */

    float celsius, fahrenheit;

    printf("Enter temperature in celsius: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * 1.8 + 32;
    printf("The temperature in fahrenheit is: %g", fahrenheit);
    return 0;
}
