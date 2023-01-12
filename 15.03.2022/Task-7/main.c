#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Студент трябва да пропътува n километра. Той има избор измежду три вида транспорт:

    Такси. Начална такса: 0.70 лв. Дневна тарифа: 0.79 лв. / км. Нощна тарифа: 0.90 лв. / км.
    Автобус. Дневна / нощна тарифа: 0.09 лв. / км. Може да се използва за разстояния минимум 20 км.
    Влак. Дневна / нощна тарифа: 0.06 лв. / км. Може да се използва за разстояния минимум 100 км.
    Напишете програма, която чете броя километри n и период от деня (ден-D или нощ-N), въведени от потребителя,
    и изчислява цената на най-евтиния транспорт.       */

    /*float taxiPrice = 0, busPrice = 0, trainPrice = 0, price;
    int kilometers;
    char dayOrNight;
    char *transport = "";

    printf("Enter distance in kilometers: ");
    scanf("%d", &kilometers);
    printf("Enter D - for day or N - for night: ");
    scanf("\n%c", &dayOrNight);

    switch (dayOrNight) {
        case 'D':
            taxiPrice = 0.70 + (0.79 * kilometers);
            break;
        case 'N':
            taxiPrice = 0.70 + (0.90 * kilometers);
            break;
    }

    if (kilometers >= 20    ) {
        busPrice = 0.09 * kilometers;
    } else if (kilometers >= 100) {
        busPrice = 0.09 * kilometers;
        trainPrice = 0.06 * kilometers;
    }

    if (busPrice != 0 && trainPrice != 0){
        price = taxiPrice;
        transport = "Taxi";
        if (price > busPrice) {
            price = busPrice;
            transport = "Bus";
        }
        if (price > trainPrice){
            price = trainPrice;
            transport = "Train";
        }
    } else if (busPrice != 0 && trainPrice == 0) {
        price = taxiPrice;
        transport = "Taxi";
        if (price > busPrice) {
            price = busPrice;
            transport = "Bus";
        }
    } else {
        price = taxiPrice;
        transport = "Taxi";
    }

    printf("%s - %g", transport, price);*/

    char a[100];
    gets(a);
    char* p = &a;

    printf("You entered: ");
    puts(a);

    printf("Alos equal to: %s", p);

    return 0;
}
