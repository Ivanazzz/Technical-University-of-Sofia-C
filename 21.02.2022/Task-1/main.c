#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Да се прочете от клавиатурата едно целочислено число и да се изведе съобщение, ако то е по-голямо от 6. */

    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if (number > 6) {
        printf("The number is greater than 6!");
    }
    return 0;
}
