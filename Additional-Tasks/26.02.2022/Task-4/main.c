#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Номерирайте картите от 2 до 14 (тези числа ще съответстват на картите от 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K, A).
    Номерирайте боите от 1 до 4 (1 – спатия, 2 – каро, 3 – купа, 4 – пика). Сега вече можете да завъртите 2
    вложени цикъла и да отпечатате всяка от картите. */

    int i, j;
    char card = ' ';
    char* cardName;

    for (i = 1; i <= 4; i++) {
        if (i == 1) {
            cardName = "clubs";
        } else if (i == 2) {
            cardName = "diamonds";
        } else if (i == 3) {
            cardName = "hearts";
        } else {
            cardName = "spades";
        }

        for (j = 2; j <= 14; j++) {
            if (j >= 11) {
                switch (j) {
                    case 11:
                    card = 'J';
                    break;
                    case 12:
                    card = 'Q';
                    break;
                    case 13:
                    card = 'K';
                    break;
                    case 14:
                    card = 'A';
                    break;
                }
                printf("%c - %s\n", card, cardName);
            } else {
                printf("%d - %s\n", j, cardName);
            }
        }
        printf("\n");
    }
    return 0;
}
