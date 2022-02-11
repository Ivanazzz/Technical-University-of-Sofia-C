#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lower, upper, step;
    int cel;
    float fahr;

    printf("lower = ");
    scanf("%d", &lower);
    printf("upper = ");
    scanf("%d", &upper);
    printf("step = ");
    scanf("%d", &step);

    printf("Celsius To Fahrenheit Converter\n");
    printf("C\tF\n");

    for (cel = lower; cel <= upper; cel += step) {
        fahr = cel * 9.0 / 5 + 32;
        printf("%d\t%g\n", cel, fahr);
    }
    return 0;
}
