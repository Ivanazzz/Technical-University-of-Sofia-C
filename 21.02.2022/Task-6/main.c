#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Да се напише програма, която прочита от клавиатурата едно цяло число и изкарва числова пирамида:
        1
        2 2
        3 3 3
        ..... */

    int number;
    int i, j;
    printf("Enter number: ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}
