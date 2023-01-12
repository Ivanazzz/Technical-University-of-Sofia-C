#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Дадено е цяло число – брой точки. Върху него се начисляват бонус точки по правилата, описани по-долу.
    Да се напише програма, която пресмята бонус точките за това число и общия брой точки с бонусите.

    - Ако числото е до 100 включително, бонус точките са 5.
    - Ако числото е по-голямо от 100, бонус точките са 20% от числото.
    - Ако числото е по-голямо от 1000, бонус точките са 10% от числото.
    - Допълнителни бонус точки (начисляват се отделно от предходните):
    - За четно число 🡪 + 1 т.
    - За число, което завършва на 5 🡪 + 2 т.  */

    int points;
    float bonusPoints = 0;

    printf("Enter points: ");
    scanf("%d", &points);

    if (points <= 100){
        bonusPoints += 5;
    } else if (points <= 1000) {
        bonusPoints += points * 0.2;
    } else if (points > 1000){
        bonusPoints += points * 0.1;
    }

    if (points % 2 == 0){
        bonusPoints++;
    } else if (points % 10 == 5){
        bonusPoints += 2;
    }

    float totalPoints = points + bonusPoints;

    printf("%g\n", bonusPoints);
    printf("%g\n", totalPoints);

    return 0;
}
