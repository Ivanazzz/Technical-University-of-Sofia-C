#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Да се прочете от клавиатурата едно целочислено число и да се изведе на екрана съобщение, ако остатъкът от делението му с 8 е по-голям от 4. */

    int number;
    printf("Enter number: ");
    scanf("%d", &number);

    if (number % 8 > 4) {
        printf("Yes!");
    }
    return 0;
}
