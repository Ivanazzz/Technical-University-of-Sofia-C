#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете конвертор от градуси в радиани. */

    float degreese, radians;

    printf("Enter degreese: ");
    scanf("%f", &degreese);

    radians = degreese * (3.14 / 180);
    printf("The radians are: %g", radians);
    return 0;
}
