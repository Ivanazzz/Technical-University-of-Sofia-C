#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете програма, която проверява дали точка {x, y} се намира вътре в правоъгълник {x1, y1} – {x2, y2}.
    Входните данни се четат от конзолата и се състоят от 6 реда, въведени от потребителя: десетичните числа x1,
    y1, x2, y2, x и y (като се гарантира, че x1 < x2 и y1 < y2). Една точка е вътрешна за даден правоъгълник,
    ако се намира някъде във вътрешността му или върху някоя от страните му. Отпечатайте “Inside” или “Outside”.  */

    float x1, y1, x2, y2, x, y;

    printf("Enter the value of x1: ");
    scanf("%f", &x1);
    printf("Enter the value of y1: ");
    scanf("%f", &y1);
    printf("Enter the value of x2: ");
    scanf("%f", &x2);
    printf("Enter the value of y2: ");
    scanf("%f", &y2);
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);

    if (x1 <= x && x <= x2) {
            if (y1 <= y && y <= y2) {
                printf("Inside!");
            }
    } else {
        printf("Outside!");
    }
    return 0;
}
