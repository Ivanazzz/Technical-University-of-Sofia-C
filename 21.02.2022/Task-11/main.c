#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Да се напише програма, която прочита от клавиатурата две реални числа и извежда стойностите
    на фукция f(x) = x*x-4 за всички стойности в дадения интервал. Стъпката на обхождане е 0.01 */

    float start, end;
    float i, result;

    printf("Enter the start: ");
    scanf("%f", &start);
    printf("Enter the end: ");
    scanf("%f", &end);

    for (i = start; i <= end; i += 0.01) {
        result = (i * i) - 4;
        printf("f(x) = x * x - 4 = %g\n", result);
    }
    return 0;
}
