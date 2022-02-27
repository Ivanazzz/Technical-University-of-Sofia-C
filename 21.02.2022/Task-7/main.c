#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Да се напише програма, която прочита от клавиатурата две цели числа и извежда сумата на числата
    между тези две числа. Въведените числа от клавиатурата не е задължително да са в ред по-малко, по-голямо.
    Вход: 2 7
    Изход: 18 Обяснение 3+4+5+6 = 18 */

    int start, end;
    int sum = 0;
    int i;

    printf("Enter start: ");
    scanf("%d", &start);
    printf("Enter end: ");
    scanf("%d", &end);

    if (start < end) {
        for (i = start + 1; i < end; i++) {
            sum += i;
        }
    }
    else {
        for (i = end + 1; i < start; i++) {
            sum += i;
        }
    }

    printf("The sum is: %d", sum);
    return 0;
}
