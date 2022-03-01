#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 4.	Направете програма, която рисува триъгълник с въведен знак от потребителя:
        вход: §
        изход:
                §
              §   §
            §       §
          §           §
        § § § § § § § § §

    Направете триъгълника и наобратно  */

    char symbol = ' ';
    int i, j;

    printf("Enter a symbol: ");
    scanf("%c", &symbol);

    printf("    %c\n", symbol);
    printf("   %c %c\n", symbol, symbol);
    printf("  %c   %c\n", symbol, symbol);
    printf(" %c     %c\n", symbol, symbol);

    for (i = 1; i <= 2; i++) {
        for (j = 1; j <= 9; j++) {
            printf("%c", symbol);
        }
        if (i == 1) {
            printf("\n");
        }
        printf("\n");
    }

    printf(" %c     %c\n", symbol, symbol);
    printf("  %c   %c\n", symbol, symbol);
    printf("   %c %c\n", symbol, symbol);
    printf("    %c\n", symbol);
    return 0;
}
