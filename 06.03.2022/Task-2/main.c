#include <stdio.h>
#include <stdlib.h>

void swap(int firstNumber, int secondNumber);

int main()
{
    /* Напишете функция за размяна на две числа. Демонстрирайте работата й. */

    swap(24, 13);

    return 0;
}

void swap(int firstNumber, int secondNumber) {
    printf("Before the swap: %d and %d\n", firstNumber, secondNumber);

    int thirdNumber = firstNumber;
    firstNumber = secondNumber;
    secondNumber = thirdNumber;

    printf("After the swap: %d and %d\n", firstNumber, secondNumber);
}
