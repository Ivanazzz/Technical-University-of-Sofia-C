#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Да се прочете от клавиатурата едно число от 1 до 7 и да се изведе на екрана кой ден от
    седмицата съответства на това число. Да се предвиди случай, когато не е въведено валидно число. */

    unsigned short number;
    char* day;
    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number) {
        case 1:
            day = "Monday";
            break;
        case 2:
            day = "Tuesday";
            break;
        case 3:
            day = "Wednesday";
            break;
        case 4:
            day = "Thursday";
            break;
        case 5:
            day = "Friday";
            break;
        case 6:
            day = "Saturday";
            break;
        case 7:
            day = "Sunday";
            break;
        default:
            day = "Invalid day!";
            break;
    }

    printf("%s", day);
    return 0;
}
