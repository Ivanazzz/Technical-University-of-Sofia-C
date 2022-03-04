#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Да се напише if-конструкция, която проверява стойността на две целочислени променливи и разменя
     техните стойности, ако стойността на първата променлива е по-голяма от втората. */

    int x, y, z;

    printf("Enter a value of X: ");
    scanf("%d", &x);
    printf("Enter a value of Y: ");
    scanf("%d", &y);

    if (x > y) {
        z = y;
        y = x;
        x = z;
    }
    printf("The values are: X -> %d and Y -> %d", x, y);

    return 0;
}
