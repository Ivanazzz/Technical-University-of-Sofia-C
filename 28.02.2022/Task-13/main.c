#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Градинар продавал реколтата от градината си на зеленчуковата борса. Продава зеленчуци за N лева на килограм
     и плодове за M лева за килограм. Напишете програма, която да пресмята приходите от реколтата в евро (ако
     приемем, че едно евро е равно на 1.95лв). От конзолата се четат 4 числа, по едно на ред, въведени от потребителя:
     Първи ред – Цена за килограм зеленчуци – число с плаваща запетая
     Втори ред – Цена за килограм плодове – число с плаваща запетая
     Трети ред – Общо килограми на зеленчуците – цяло число
     Четвърти ред – Общо килограми на плодовете – цяло число  */

    float vegetablePricePerKg, fruitPricePerKg;
    int vegetablesInKg, fruitsInKg;

    printf("Enter vegetables price per kg: ");
    scanf("%f", &vegetablePricePerKg);
    printf("Enter fruits price per kg: ");
    scanf("%f", &fruitPricePerKg);
    printf("Enter vegetables in kg: ");
    scanf("%d", &vegetablesInKg);
    printf("Enter fruits in kg: ");
    scanf("%d", &fruitsInKg);

    float totalProfitBGN = (vegetablesInKg * vegetablePricePerKg) + (fruitsInKg * fruitPricePerKg);
    float totalProfitEUR = totalProfitBGN / 1.95;

    printf("The profit in EUR is: %g", totalProfitEUR);
    return 0;
}
