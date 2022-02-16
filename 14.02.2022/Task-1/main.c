#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Да се напише програма, която намира лице на правоъгълник по зададени от клавиатурата две страни и го извежда на екрана.*/
    float a, b;
    printf("Enter the first side of the rectangle: \n");
    scanf("%f", &a);
    printf("Enter the second side of the rectangle: \n");
    scanf("%f", &b);

    float area = a * b;
    printf("The area of the rectangle is: %g\n", area);
    return 0;
}
