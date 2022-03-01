#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете програма, която отпечатва рамка с размер 10х5 изградена от знак, въведен от потребителя:
        Вход:
        -
        изход:
        ----------
        -        -
        -        -
        -        -
        ----------       */

    char symbol = ' ';
    int i, j;

    printf("Enter a symbol: ");
    scanf("%c", &symbol);

    for (i = 1; i <= 5; i++) {
        if (i == 1 || i == 5) {
            for (j = 1; j <= 10; j++) {
                printf("%c", symbol);
            }
            printf("\n");
        } else {
            printf("%c        %c\n", symbol, symbol);
        }
    }

    return 0;
}
