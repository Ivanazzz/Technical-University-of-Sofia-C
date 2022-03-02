#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* На площадката пред жилищен блок трябва да се поставят плочки. Площадката е с форма на квадрат
     със страна N метра. Плочките са широки „W“ метра и дълги „L“ метра. На площадката има една пейка
     с ширина M метра и дължина O метра. Под нея не е нужно да се слагат плочки. Всяка плочка се поставя
     за 0.2 минути. Напишете програма, която чете от конзолата размерите на площадката, плочките и пейкатa
     и пресмята колко плочки са необходими да се покрие площадката и пресмята времето за поставяне на всички плочки.
     Пример: площадка с размер 20м. има площ 400кв.м. Пейка широка 1м. и дълга 2м., заема площ 2кв.м.
     Една плочка е широка 5м. и дълга 4м. има площ = 20кв.м. Площта която трябва да се покрие е 400 – 2 = 398 кв.м.
     Необходими са 398 / 20 = 19.90 плочки. Необходимото време е 19.90 * 0.2 = 3.98 минути.  */


    int yardSideInMeters, tileWidthInMeters, tileLengthInMeters, benchWidthInMeters, benchLengthInMeters;

    printf("Enter the length of the yard: ");
    scanf("%d", &yardSideInMeters);
    printf("Enter the width of the bench: ");
    scanf("%d", &benchWidthInMeters);
    printf("Enter the length of the bench: ");
    scanf("%d", &benchLengthInMeters);
    printf("Enter the width of the tile: ");
    scanf("%d", &tileWidthInMeters);
    printf("Enter the length of the tile: ");
    scanf("%d", &tileLengthInMeters);

    int yardArea = yardSideInMeters * yardSideInMeters;
    int benchArea = benchLengthInMeters * benchWidthInMeters;
    int tileArea = tileLengthInMeters * tileWidthInMeters;

    yardArea -= benchArea;

    float neededTiles = yardArea * 1.0 / tileArea;
    float neededMinutes = neededTiles * 0.2;

    printf("Total needed tiles: %g\n", neededTiles);
    printf("Total needed minutes: %g\n", neededMinutes);
    return 0;
}
