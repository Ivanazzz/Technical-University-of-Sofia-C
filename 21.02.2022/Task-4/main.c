#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Да се прочете от клавиатурата цифра и да се изведе на екрана нейното име. Да се използва оператор switch-case. */

    unsigned short digit;
    char* digitName;

    printf("Enter digit: ");
    scanf("%hu", &digit);

    switch (digit) {
        case 0:
            digitName = "null";
            break;
        case 1:
            digitName = "one";
            break;
        case 2:
            digitName = "two";
            break;
        case 3:
            digitName = "three";
            break;
        case 4:
            digitName = "four";
            break;
        case 5:
            digitName = "five";
            break;
        case 6:
            digitName = "six";
            break;
        case 7:
            digitName = "seven";
            break;
        case 8:
            digitName = "eight";
            break;
        case 9:
            digitName = "nine";
            break;
    }

    printf("%s", digitName);
    return 0;
}
