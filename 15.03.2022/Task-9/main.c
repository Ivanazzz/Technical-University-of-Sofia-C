#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* От лозе с площ X квадратни метри се заделя 40% от реколтата за производство на вино. От 1 кв.м лозе се изкарват
     Y килограма грозде. За 1 литър вино са нужни 2,5 кг. грозде. Желаното количество вино за продан е Z литра.
     Напишете програма, която пресмята колко вино може да се произведе и дали това количество е достатъчно. Ако е
     достатъчно, остатъкът се разделя по равно между работниците на лозето.    */

    int vineyardSqrtMeters, wineLitersNeeded, workers;
    float grapePerSqrtMeter;

    scanf("%d", &vineyardSqrtMeters);
    scanf("%f", &grapePerSqrtMeter);
    scanf("%d", &wineLitersNeeded);
    scanf("%d", &workers);

    float totalGrape = vineyardSqrtMeters * grapePerSqrtMeter;
    float wineLiters = (0.4 * totalGrape) / 2.5;

    if (wineLiters >= wineLitersNeeded){
        float result = wineLiters - wineLitersNeeded;
        float litersPerPerson = result / workers;
        printf("Good harvest this year! Total wine: %g liters.\n", floor(wineLiters));
        printf("%g liters left -> %g liters per person.\n", ceil(result), ceil(litersPerPerson));
    } else {
        printf("It will be a tough winter! More %g liters wine needed.", floor(wineLitersNeeded - wineLiters));
    }
    return 0;
}
