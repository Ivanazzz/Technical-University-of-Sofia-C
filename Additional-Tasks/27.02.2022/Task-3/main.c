#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* Напишете програма, която при въвеждане на коефициентите (a, b и c) на квадратно уравнение: ax2+bx+c, изчислява
    и извежда неговите реални корени (ако има такива). Квадратните уравнения могат да имат 0, 1 или 2 реални корена. */

    int a, b, c, D;
    double result1, result2;

    printf("Enter the value of 'a' for this equation 'ax^2 + bx + c': ");
    scanf("%d", &a);
    printf("Enter the value of 'b' for this equation 'ax^2 + bx + c': ");
    scanf("%d", &b);
    printf("Enter the value of 'c' for this equation 'ax^2 + bx + c': ");
    scanf("%d", &c);

    D = (b * b) - (4 * a * c);
    if (D < 0) {
        printf("The equation has no roots!");
    } else if (D == 0) {
        result1 = - b / (2.0 * a);
        printf("The equation has one root which is %g!", &result1);
    } else {
        result1 = (- b - sqrt(D)) / (2.0 * a);
        result2 = (- b + sqrt(D)) / (2.0 * a);
        printf("The equation has two roost which are %g and %g!", &result1, &result2);
    }
    return 0;
}
