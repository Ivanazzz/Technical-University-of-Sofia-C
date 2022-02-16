#include <stdio.h>
#include <stdlib.h>

const float PI = 3.14;

int main()
{
    /* Да се напише програма, която намира обиколката на окръжност по зададен диаметър от клавиатурата и извежда резултата на екрана.*/
    float d;
    printf("Enter the diameter of the circle: \n");
    scanf("%f", &d);
    float result = d * PI;
    printf("The result is: %f\n", result);
    return 0;
}
