#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Да се състави програма, чрез която се въвеждат 7 цели числа от интервала [-5000..5000] в едномерен масив.
    Програмата да изведе средната стойност на въведените числа.
    Пример: 89, -123, 45, 196, 1204, 0, 112
    Изход: 217.571   */

    int list[7] = {89, -123, 45, 196, 1204, 0, 112};
    float average = 0;
    int i;

    for(i = 0; i < 7; i++) {
        average += list[i];
    }

    average = average / 7;
    printf("%g", average);

    return 0;
}