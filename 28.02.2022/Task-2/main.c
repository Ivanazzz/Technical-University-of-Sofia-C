#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Напишете програма, която отпечатва триъгълник от 55 звездички:
        *
        **
        ***
        ****
        *****
        ******
        *******
        ********
        *********
        **********   */

    int i, j;

    for (i = 1; i <= 55; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}