#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Басейн с обем V има две тръби от които се пълни. Всяка тръба има определен дебит (литрите вода
    минаващи през една тръба за един час). Работникът пуска тръбите едновременно и излиза за N часа.
    Напишете програма, която изкарва състоянието на басейна, в момента, когато работникът се върне.  */

    int poolVolume, pipe1, pipe2;
    float hours;

    scanf("%d", &poolVolume);
    scanf("%d", &pipe1);
    scanf("%d", &pipe2);
    scanf("%f", &hours);

    pipe1 = pipe1 * hours;
    pipe2 = pipe2 * hours;
    float totalLiters = pipe1 + pipe2;

    if (totalLiters > poolVolume) {
        printf("The water in the pool is overflowing!");
    } else {
        float fullPercentage = (totalLiters / poolVolume) * 100;
        printf("The pool is %.2f%% full.", fullPercentage);
    }
    return 0;
}
