#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Да се напише програма, която прочита от клавиатурата две числа и извежда сумата
    на четните числа и произведението на нечетните, които се намират между тези две числа. */

    unsigned int firstNumber, secondNumber;
    unsigned int evenNumbersSum = 0;
    unsigned int oddNumbersProduct = 1;
    int i;

    printf("Enter the first number: ");
    scanf("%d", &firstNumber);
    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    for (i = firstNumber + 1; i < secondNumber; i++) {
        if (i % 2 == 0) {
            evenNumbersSum += i;
        } else {
            oddNumbersProduct *= i;
        }
    }

    printf("The sum is: %d\n", evenNumbersSum);
    printf("The product is: %d\n", oddNumbersProduct);

    return 0;
}
