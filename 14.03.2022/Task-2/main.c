#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Да се състави програма, чрез която се въвеждат 7 цели числа от интервала [-5000..5000] в едномерен масив.
    Програмата да изведе най-голямото от въведените числа.
    Пример: 89, -123, 45, 196, 1204, 0, 112
    Изход: 1204    */

    int list[7] = {89, -123, 45, 196, 1204, 0, 112};
    int greaterNumber = list[0];
    int i;

    for (i = 0; i < 7; i++) {
        if (list[i] > greaterNumber) {
            greaterNumber = list[i];
        }
    }

    printf("%d", greaterNumber);

    return 0;
}
