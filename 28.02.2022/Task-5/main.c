#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете програма, която конвертира от въведени от потребителя инчове в мм,см,дм и м. Напишете подходящ интерфейс за общуване с потребителя. */

    float inch, mm, cm, dm, m;

    printf("Enter distance in inches: ");
    scanf("%f", &inch);

    mm = inch * 25.4;
    cm = inch * 2.54;
    dm = inch * 0.254;
    m = inch * 0.0254;

    printf("The distance in millimeters is: %g\n", mm);
    printf("The distance in centimeters is: %g\n", cm);
    printf("The distance in decimeters is: %g\n", dm);
    printf("The distance in meters is: %g\n", m);
    return 0;
}
